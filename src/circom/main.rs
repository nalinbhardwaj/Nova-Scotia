use std::time::Instant;

use crate::{
    circom_circuit::CircomCircuit,
    circom_reader::{load_r1cs, load_witness_from_file},
};
use nova_snark::{traits::circuit::TrivialTestCircuit, PublicParams, RecursiveSNARK};
use pairing::Engine;
use pasta_curves::{
    arithmetic::CurveAffine,
    group::{Curve, Group},
};

type G1 = pasta_curves::pallas::Point;
type G2 = pasta_curves::vesta::Point;

mod circom_circuit;
mod circom_file;
mod circom_reader;

fn main() {
    let circuit_file = "/Users/nibnalin/Documents/Nova/examples/circom/artifacts/test.r1cs";
    let witness_file = "/Users/nibnalin/Documents/Nova/examples/circom/artifacts/witness.wtns";

    let circuit_primary = CircomCircuit {
        r1cs: load_r1cs(&circuit_file),
        witness: Some(load_witness_from_file::<<G1 as Group>::Scalar>(
            &witness_file,
        )),
        wire_mapping: None,
    };

    let circuit_secondary = TrivialTestCircuit::default();
    let pp = PublicParams::<
        G1,
        G2,
        CircomCircuit<<G1 as Group>::Scalar>,
        TrivialTestCircuit<<G2 as Group>::Scalar>,
    >::setup(circuit_primary.clone(), circuit_secondary.clone());
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

    let z0_primary = vec![<G1 as Group>::Scalar::zero(), <G1 as Group>::Scalar::zero()];
    let z0_secondary = vec![<G2 as Group>::Scalar::zero()];

    let num_steps: usize = 1;
    for i in 0..num_steps {
        let start = Instant::now();
        let res = RecursiveSNARK::prove_step(
            &pp,
            recursive_snark,
            circuit_primary.clone(),
            circuit_secondary.clone(),
            z0_primary.clone(),
            z0_secondary.clone(),
        );

        // assert!(res.is_ok());
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
    let res = recursive_snark.verify(&pp, num_steps, z0_primary.clone(), z0_secondary.clone());
    println!(
        "RecursiveSNARK::verify: {:?}, took {:?}",
        res,
        start.elapsed()
    );
    // assert!(res.is_ok());

    println!("test");
}
