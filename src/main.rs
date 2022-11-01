use std::{env::current_dir, fs, path::Path, time::Instant};

use nova_scotia::circom::{
    circuit::CircomCircuit,
    reader::{generate_witness_from_bin, load_r1cs},
};
use nova_snark::{traits::circuit::TrivialTestCircuit, PublicParams, RecursiveSNARK};
use num_bigint::BigInt;
use num_traits::Num;
use pasta_curves::group::ff::PrimeField;
use pasta_curves::{
    arithmetic::CurveAffine,
    group::{Curve, Group},
};
use serde::{Deserialize, Serialize};
type G1 = pasta_curves::pallas::Point;
type G2 = pasta_curves::vesta::Point;

#[derive(Serialize, Deserialize)]
struct CircomInput {
    step_in: Vec<String>,
    // step_out: Vec<String>,
    adder: String,
}

fn main() {
    let root = current_dir().unwrap();

    let circuit_file = root.join("circom/test.r1cs");
    let r1cs = load_r1cs(&circuit_file);

    let witness_generator_file = root.join("circom/test_cpp/test");
    let witness_generator_input = root.join("circom/input.json");
    let witness_generator_output = root.join("circom/witness.wtns");

    let mut circuit_iterations: Vec<CircomCircuit<<G1 as Group>::Scalar>> = vec![];

    let z0_primary = vec![
        <G1 as Group>::Scalar::from(10),
        <G1 as Group>::Scalar::from(10),
    ];

    let iteration_count: usize = 5;
    let start_public_input: Vec<String> = z0_primary
        .iter()
        .map(|&x| format!("{:?}", x).strip_prefix("0x").unwrap().to_string())
        .collect();
    let mut current_public_input = start_public_input.clone();

    for i in 0..iteration_count {
        // print!("Iteration: {}, current input {:?}", i, current_public_input);
        let adder = i as u64;

        let decimal_stringified_input: Vec<String> = current_public_input
            .iter()
            .map(|x| BigInt::from_str_radix(x, 16).unwrap().to_str_radix(10))
            .collect();

        let input = CircomInput {
            step_in: decimal_stringified_input.clone(),
            adder: adder.to_string(),
        };

        let input_json = serde_json::to_string(&input).unwrap();
        fs::write(&witness_generator_input, input_json).unwrap();

        let witness = generate_witness_from_bin::<<G1 as Group>::Scalar>(
            &witness_generator_file,
            &witness_generator_input,
            &witness_generator_output,
        );
        let circuit = CircomCircuit {
            r1cs: r1cs.clone(),
            witness: Some(witness),
        };
        let current_public_output = circuit.get_public_outputs();
        println!(" -> output {:?}", current_public_output);

        circuit_iterations.push(circuit);
        current_public_input = current_public_output
            .iter()
            .map(|&x| format!("{:?}", x).strip_prefix("0x").unwrap().to_string())
            .collect();
    }

    println!("loaded circuit iterations");

    let circuit_secondary = TrivialTestCircuit::default();
    let pp = PublicParams::<
        G1,
        G2,
        CircomCircuit<<G1 as Group>::Scalar>,
        TrivialTestCircuit<<G2 as Group>::Scalar>,
    >::setup(circuit_iterations[0].clone(), circuit_secondary.clone());
    println!(
        "Number of constraints per step (primary circuit): {}",
        pp.num_constraints().0
    );
    println!(
        "Number of constraints per step (secondary circuit): {}",
        pp.num_constraints().1
    );

    println!(
        "Number of variables per step (primary circuit): {}",
        pp.num_variables().0
    );
    println!(
        "Number of variables per step (secondary circuit): {}",
        pp.num_variables().1
    );

    type C1 = CircomCircuit<<G1 as Group>::Scalar>;
    type C2 = TrivialTestCircuit<<G2 as Group>::Scalar>;

    let mut recursive_snark: Option<RecursiveSNARK<G1, G2, C1, C2>> = None;

    let z0_secondary = vec![<G2 as Group>::Scalar::zero()];

    for i in 0..iteration_count {
        let start = Instant::now();
        let res = RecursiveSNARK::prove_step(
            &pp,
            recursive_snark,
            circuit_iterations[i].clone(),
            circuit_secondary.clone(),
            z0_primary.clone(),
            z0_secondary.clone(),
        );

        assert!(res.is_ok());
        println!(
            "RecursiveSNARK::prove_step {}: {:?}, took {:?} ",
            i,
            res.is_ok(),
            start.elapsed()
        );
        recursive_snark = Some(res.unwrap());
    }

    let recursive_snark = recursive_snark.unwrap();

    // verify the recursive SNARK
    println!("Verifying a RecursiveSNARK...");
    let start = Instant::now();
    let res = recursive_snark.verify(
        &pp,
        iteration_count,
        z0_primary.clone(),
        z0_secondary.clone(),
    );
    println!(
        "RecursiveSNARK::verify: {:?}, took {:?}",
        res,
        start.elapsed()
    );
    assert!(res.is_ok());
}
