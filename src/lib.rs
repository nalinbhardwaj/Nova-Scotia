use std::{collections::HashMap, env::current_dir, fmt::Error, fs, path::PathBuf, time::Instant};

use circom::circuit::{CircomCircuit, R1CS};
use nova_snark::{
    traits::{circuit::TrivialTestCircuit, Group},
    PublicParams, RecursiveSNARK,
};
use num_bigint::BigInt;
use num_traits::Num;
use serde::{Deserialize, Serialize};
use serde_json::Value;

use crate::circom::reader::generate_witness_from_bin;

pub mod circom;

pub type G1 = pasta_curves::pallas::Point;
pub type F1 = <G1 as Group>::Scalar;
pub type G2 = pasta_curves::vesta::Point;
pub type F2 = <G2 as Group>::Scalar;
type C1 = CircomCircuit<<G1 as Group>::Scalar>;
type C2 = TrivialTestCircuit<<G2 as Group>::Scalar>;

pub fn create_public_params(
    r1cs: R1CS<F1>,
) -> PublicParams<G1, G2, CircomCircuit<F1>, TrivialTestCircuit<F2>> {
    let circuit_primary = CircomCircuit {
        r1cs,
        witness: None,
    };
    let circuit_secondary = TrivialTestCircuit::default();

    let pp = PublicParams::<G1, G2, CircomCircuit<F1>, TrivialTestCircuit<F2>>::setup(
        circuit_primary.clone(),
        circuit_secondary.clone(),
    );
    pp
}

#[derive(Serialize, Deserialize)]
struct CircomInput {
    step_in: Vec<String>,

    #[serde(flatten)]
    extra: HashMap<String, Value>,
}

pub fn create_recursive_circuit(
    witness_generator_file: PathBuf,
    r1cs: R1CS<F1>,
    private_inputs: Vec<HashMap<String, Value>>,
    start_public_input: Vec<F1>,
    pp: &PublicParams<G1, G2, C1, C2>,
) -> Result<RecursiveSNARK<G1, G2, C1, C2>, std::io::Error> {
    let root = current_dir().unwrap();
    let witness_generator_input = root.join("circom_input.json");
    let witness_generator_output = root.join("circom_witness.wtns");

    let iteration_count = private_inputs.len();
    let mut circuit_iterations = Vec::with_capacity(iteration_count);

    let start_public_input_hex = start_public_input
        .iter()
        .map(|&x| format!("{:?}", x).strip_prefix("0x").unwrap().to_string())
        .collect::<Vec<String>>();
    let mut current_public_input = start_public_input_hex.clone();

    for i in 0..iteration_count {
        let decimal_stringified_input: Vec<String> = current_public_input
            .iter()
            .map(|x| BigInt::from_str_radix(x, 16).unwrap().to_str_radix(10))
            .collect();

        let input = CircomInput {
            step_in: decimal_stringified_input.clone(),
            extra: private_inputs[i].clone(),
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

        circuit_iterations.push(circuit);
        current_public_input = current_public_output
            .iter()
            .map(|&x| format!("{:?}", x).strip_prefix("0x").unwrap().to_string())
            .collect();
    }
    // fs::remove_file(witness_generator_input)?;
    // fs::remove_file(witness_generator_output)?;

    let circuit_secondary = TrivialTestCircuit::default();

    let mut recursive_snark: Option<RecursiveSNARK<G1, G2, C1, C2>> = None;

    let z0_secondary = vec![<G2 as Group>::Scalar::zero()];

    for i in 0..iteration_count {
        let res = RecursiveSNARK::prove_step(
            &pp,
            recursive_snark,
            circuit_iterations[i].clone(),
            circuit_secondary.clone(),
            start_public_input.clone(),
            z0_secondary.clone(),
        );

        assert!(res.is_ok());
        recursive_snark = Some(res.unwrap());
    }

    let recursive_snark = recursive_snark.unwrap();

    Ok(recursive_snark)
}

#[cfg(test)]
mod tests {
    use std::env::current_dir;

    use nova_snark::CompressedSNARK;
    use serde_json::json;

    use super::*;
    use crate::circom::reader::load_r1cs;

    #[test]
    fn test_trivial_circom_circuit() {
        let iteration_count = 5;
        let root = current_dir().unwrap();

        let circuit_file = root.join("examples/test/test.r1cs");
        let r1cs = load_r1cs(&circuit_file);
        let witness_generator_file = root.join("examples/test/test_cpp/test");

        let mut private_inputs = Vec::new();
        for i in 0..iteration_count {
            let mut private_input = HashMap::new();
            private_input.insert("adder".to_string(), json!(i));
            private_inputs.push(private_input);
        }

        let start_public_input = vec![F1::from(10), F1::from(10)];

        let pp = create_public_params(r1cs.clone());

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

        println!("Creating a RecursiveSNARK...");
        let start = Instant::now();
        let recursive_snark = create_recursive_circuit(
            witness_generator_file,
            r1cs,
            private_inputs,
            start_public_input.clone(),
            &pp,
        )
        .unwrap();
        println!("RecursiveSNARK creation took {:?}", start.elapsed());

        // TODO: empty?
        let z0_secondary = vec![<G2 as Group>::Scalar::zero()];

        // verify the recursive SNARK
        println!("Verifying a RecursiveSNARK...");
        let start = Instant::now();
        let res = recursive_snark.verify(
            &pp,
            iteration_count,
            start_public_input.clone(),
            z0_secondary.clone(),
        );
        println!(
            "RecursiveSNARK::verify: {:?}, took {:?}",
            res,
            start.elapsed()
        );
        assert!(res.is_ok());

        // produce a compressed SNARK
        println!("Generating a CompressedSNARK using Spartan with IPA-PC...");
        let start = Instant::now();
        type S1 = nova_snark::spartan_with_ipa_pc::RelaxedR1CSSNARK<G1>;
        type S2 = nova_snark::spartan_with_ipa_pc::RelaxedR1CSSNARK<G2>;
        let res = CompressedSNARK::<_, _, _, _, S1, S2>::prove(&pp, &recursive_snark);
        println!(
            "CompressedSNARK::prove: {:?}, took {:?}",
            res.is_ok(),
            start.elapsed()
        );
        assert!(res.is_ok());
        let compressed_snark = res.unwrap();

        // verify the compressed SNARK
        println!("Verifying a CompressedSNARK...");
        let start = Instant::now();
        let res = compressed_snark.verify(
            &pp,
            iteration_count,
            start_public_input.clone(),
            z0_secondary,
        );
        println!(
            "CompressedSNARK::verify: {:?}, took {:?}",
            res.is_ok(),
            start.elapsed()
        );
        assert!(res.is_ok());
    }
}
