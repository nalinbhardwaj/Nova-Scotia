use std::{
    collections::HashMap,
    env::current_dir,
    io::Write,
    time::{Duration, Instant},
};

use ff::PrimeField;
use nova_scotia::{
    circom::reader::load_r1cs, create_public_params, create_recursive_circuit, FileLocation, F,
};
use nova_snark::traits::Group;
use serde::{Deserialize, Serialize};
use serde_json::json;

#[derive(Serialize, Deserialize)]
#[allow(non_snake_case)]
struct Blocks {
    prevBlockHash: [String; 2],
    blockHashes: Vec<[String; 2]>,
    blockHeaders: Vec<Vec<u8>>,
}

fn bench(iteration_count: usize, per_iteration_count: usize) -> (Duration, Duration) {
    type G1 = pasta_curves::pallas::Point;
    type G2 = pasta_curves::vesta::Point;

    let root = current_dir().unwrap();

    let circuit_file = root.join("examples/bitcoin/circom/bitcoin_benchmark.r1cs");
    let r1cs = load_r1cs::<G1, G2>(&FileLocation::PathBuf(circuit_file));
    let witness_generator_file =
        root.join("examples/bitcoin/circom/bitcoin_benchmark_cpp/bitcoin_benchmark");

    // load serde json
    let btc_blocks: Blocks =
        serde_json::from_str(include_str!("bitcoin/fetcher/btc-blocks.json")).unwrap();

    let start_public_input = [
        F::<G1>::from_str_vartime(&btc_blocks.prevBlockHash[0]).unwrap(),
        F::<G1>::from_str_vartime(&btc_blocks.prevBlockHash[1]).unwrap(),
    ];

    let mut private_inputs = Vec::new();

    for i in 0..iteration_count {
        let mut private_input = HashMap::new();
        private_input.insert(
            "blockHashes".to_string(),
            json!(
                btc_blocks.blockHashes
                    [i * per_iteration_count..i * per_iteration_count + per_iteration_count]
            ),
        );
        private_input.insert(
            "blockHeaders".to_string(),
            json!(
                btc_blocks.blockHeaders
                    [i * per_iteration_count..i * per_iteration_count + per_iteration_count]
            ),
        );
        private_inputs.push(private_input);
    }

    // println!("{:?} {:?}", start_public_input, private_inputs);

    let pp = create_public_params::<G1, G2>(r1cs.clone());

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
        FileLocation::PathBuf(witness_generator_file),
        r1cs,
        private_inputs,
        start_public_input.to_vec(),
        &pp,
    )
    .unwrap();
    let prover_time = start.elapsed();
    println!("RecursiveSNARK creation took {:?}", start.elapsed());

    let z0_secondary = [<G2 as Group>::Scalar::zero()];

    // verify the recursive SNARK
    println!("Verifying a RecursiveSNARK...");
    let start = Instant::now();
    let res = recursive_snark.verify(&pp, iteration_count, &start_public_input, &z0_secondary);
    println!(
        "RecursiveSNARK::verify: {:?}, took {:?}",
        res,
        start.elapsed()
    );
    let verifier_time = start.elapsed();
    assert!(res.is_ok());

    // produce a compressed SNARK
    // println!("Generating a CompressedSNARK using Spartan with IPA-PC...");
    // let start = Instant::now();
    // type S1 = nova_snark::spartan_with_ipa_pc::RelaxedR1CSSNARK<G1>;
    // type S2 = nova_snark::spartan_with_ipa_pc::RelaxedR1CSSNARK<G2>;
    // let res = CompressedSNARK::<_, _, _, _, S1, S2>::prove(&pp, &recursive_snark);
    // println!(
    //     "CompressedSNARK::prove: {:?}, took {:?}",
    //     res.is_ok(),
    //     start.elapsed()
    // );
    // assert!(res.is_ok());
    // let compressed_snark = res.unwrap();

    // // verify the compressed SNARK
    // println!("Verifying a CompressedSNARK...");
    // let start = Instant::now();
    // let res = compressed_snark.verify(
    //     &pp,
    //     iteration_count,
    //     start_public_input.clone(),
    //     z0_secondary,
    // );
    // println!(
    //     "CompressedSNARK::verify: {:?}, took {:?}",
    //     res.is_ok(),
    //     start.elapsed()
    // );
    // assert!(res.is_ok());
    (prover_time, verifier_time)
}

fn main() {
    // create benchmark file
    let mut file = std::fs::File::create("examples/bitcoin/benchmark.csv").unwrap();
    file.write_all(b"iteration_count,per_iteration_count,prover_time,verifier_time\n")
        .unwrap();
    for i in 1..=5 {
        let j = 120 / i;

        // run bash script
        std::process::Command::new("bash")
            .arg("examples/bitcoin/circom/compile.sh")
            .arg(i.to_string())
            .output()
            .expect("failed to execute process");

        let (prover_time, verifier_time) = bench(j, i);
        file.write_all(format!("{},{},{:?},{:?}\n", j, i, prover_time, verifier_time).as_bytes())
            .unwrap();
    }
}
