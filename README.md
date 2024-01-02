# Nova Scotia

### Middleware to compile [Circom](https://github.com/iden3/circom) circuits to [Nova](https://github.com/microsoft/Nova) prover

<img width="100%" src="https://user-images.githubusercontent.com/6984346/201644366-a9be1826-81cc-4b78-91c0-2086241e5130.png" alt="Original from Tadashi Moriyama">

This repository provides necessary middleware to take generated output of the Circom compiler (R1CS constraints and generated witnesses) and use them with Nova as a prover.

## Why?

Nova is the state of the art for recursive SNARKs, Circom is the state of the art for ZK devtooling, so it makes a lot of sense to want to do this. Since Nova uses ~R1CS arithmetization, its mostly just a matter of parsing Circom output into something Nova can use.

As [Justin Drake talks about it](https://youtu.be/SwonTtOQzAk), I think the right way to think of Nova is as a preprocessor for zkSNARKs with lots of repeated structure -- Nova can shrink the cost (in number of R1CS constraints) of checking N instances of a problem to ~one instance of the same problem. This is clean and magical and lends itself well to a world where we take the output of Nova and then verify it in a "real" zkSNARK (like PLONK/groth16/Spartan) to obtain a actually fully minified proof (that is sublinear even in the size of one instance). Notably, [this pattern is already used](https://youtu.be/VmYpbFxBdtM?t=155) in settings like [zkEVMs](https://youtu.be/j7An-33_Zs0), but with STARK proofs instead of Nova proofs. IMO, Nova (and folding scheme-like things in particular) lend themselves better to the properties we want with the preprocessing layer vs. STARKs: fast compression, minimal cryptographic assumptions and low recursive overhead.[^1]

Nova Scotia comes with extensive [examples](https://github.com/nalinbhardwaj/Nova-Scotia/tree/main/examples), as well as a [in-browser usage example](https://github.com/nalinbhardwaj/Nova-Scotia/tree/main/browser-test). We will describe the proving/verifying workflow in more detail below.

[^1]: But currently, Nova/R1CS lacks the customizability of STARKS (custom gates and lookup tables in particular), so there is a tradeoff here.

## How?

![Nova Scotia](https://user-images.githubusercontent.com/6984346/201644973-fb084b6c-3807-4bf4-99bf-a1461271f1b5.png)

To use it yourself, start by installing [Circom](https://docs.circom.io) as described in the [Circom documentation](https://docs.circom.io/getting-started/installation/#installing-dependencies).

### Writing Nova Step Circuits in Circom

To write Nova Scotia circuits in Circom, we operate on the abstraction of one step of recursion. We write a circuit that takes a list of public inputs (these must be named `step_in` for the Nova-Scotia interface) and outputs the same number of public outputs (named `step_out`). These public outputs will then be routed to the next step of recursion as `step_in`, and this will continue until we reach the end of the recursion iterations. Within a step circuit, besides the public inputs, Circom circuits can input additional private inputs (with any name/JSON structure Circom will accept). We will instrument the piping of these private inputs in our Rust shimming.

When you're ready, compile your circuit using `circom [file].circom --r1cs --sym --c --prime vesta` for the vesta curve. Compile the C++ witness generator in `[file]_cpp` by running `make` in that folder. Alternately, you can compile the WASM witness generator using `circom [file].circom --r1cs --sym --wasm --prime vesta`.  We will later use the R1CS file and the witness generator binary (either C++ binary or WASM), so make note of their filepaths. You can independently test these step circuits by running witness generation as described in the [Circom documentation](https://docs.circom.io/getting-started/computing-the-witness/).

Since Nova runs on a cycle of elliptic curves, you must specify the curve via traits and in the Circom compilation command. Currently, Nova Scotia supports any cycle supported by Nova upstream in [provider](https://github.com/microsoft/Nova/tree/main/src/provider) and by Circom's `--prime` flag. You can see example circuits for both the [Pasta (pallas/vesta)](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/toy_pasta.rs) and [bn254/grumpkin](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/toy_bn254.rs) curves in the examples directory.

### Rust shimming for Nova Scotia

Start a new Rust project and add Nova Scotia to your dependencies. Then, you can start using your Circom step circuits with Nova. Start by defining the paths to the Circom output and loading the R1CS file:

```rust
// The cycle of curves we use, can be any cycle supported by Nova
type G1 = pasta_curves::pallas::Point;
type G2 = pasta_curves::vesta::Point;

let circuit_file = root.join("examples/bitcoin/circom/bitcoin_benchmark.r1cs");
let witness_generator_file =
    root.join("examples/bitcoin/circom/bitcoin_benchmark_cpp/bitcoin_benchmark");

let r1cs = load_r1cs::<G1, G2>(&circuit_file); // loads R1CS file into memory
```

Circom supports witness generation using both C++ and WASM, so you can choose which one to use by passing `witness_generator_file` either as the generated C++ binary or as the WASM output of Circom (the `circuit.wasm` file). If you use WASM, we assume you have a compatible version of `node` installed on your system. Note that for proving locally, we recommend using the C++ witness generator for performance (except on M1/M2 Macs where it is not supported). For in-browser proving/verifying, you must use the WASM witness generator. We will describe in-browser proving and verification workflow later in the README.

Then, create the public parameters (CRS) using the `create_public_params` function:

```rust
let pp = create_public_params::<G1, G2>(r1cs.clone());
```

Now, construct the input to Circom witness generator at each step of recursion. This is a HashMap representation of the JSON input to your Circom input. For instance, in the case of the [bitcoin](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin.rs#L40) example, `private_inputs` is a list of `HashMap`s, each containing block headers and block hashes for the blocks that step of recursion verifies, and the public input `step_in` is the previous block hash in the chain.

To instantiate this recursion, we use `create_recursive_circuit` from Nova Scotia:

```rust
let recursive_snark = create_recursive_circuit(
    FileLocation::PathBuf(witness_generator_file),
    r1cs,
    private_inputs,
    start_public_input.to_vec(),
    &pp,
).unwrap();
```

Verification is done using the `verify` function defined by Nova, which additionally takes secondary inputs that Nova Scotia will initialise to `[F<G2>::zero()]`, so just pass that in:

```rust
println!("Verifying a RecursiveSNARK...");
let start = Instant::now();
let res = recursive_snark.verify(
    &pp,
    iteration_count,
    &start_public_input.clone(),
    &[F<G2>::zero()],
);
println!(
    "RecursiveSNARK::verify: {:?}, took {:?}",
    res,
    start.elapsed()
);
let verifier_time = start.elapsed();
assert!(res.is_ok());
```

For proper examples and more details, see the `toy.rs` and the `bitcoin.rs` examples documented below:

### [`toy.rs`](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/toy.rs)

toy.rs is a [very simple toy step circuit](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/toy/toy.circom) meant for testing purposes. It is helpful to start by looking at its Circom code and the Rust code that instantiates it in Nova. It is a simple variant of fibonacci that additionally takes a private input to add at each step.

### [`bitcoin.rs`](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin.rs)

> Run the [bitcoin example](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin/)

bitcoin.rs is a more complex example that uses Nova to create a prover for bitcoin chain proof-of-work. For nearly the cost of just one block proof-of-work verification, Nova can compress the verification of the entire bitcoin chain. [The Circom circuit is more complex](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin/circom/bitcoin.circom) for this construction (since it runs hashing and other bit-twiddling to verify each block in ~150k constraints). This is also helpful to look at for [benchmarking](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin.rs#L23) purposes, since you can play around with the number of blocks verified in each step of recursion. Here are some simple benchmarks for different configurations of recursion for 120 blocks being proven and verified:

| Number of recursion steps | Blocks verified per step | Prover time | Verifier time (uncompressed) |
| ------------------------- | ------------------------ | ----------- | ---------------------------- |
| 120                       | 1                        | 55.38s      | 214.43ms                     |
| 60                        | 2                        | 49.05s      | 434.96ms                     |
| 40                        | 3                        | 42.08s      | 509.03ms                     |
| 30                        | 4                        | 45.40s      | 923.23ms                     |
| 24                        | 5                        | 48.43s      | 991.89ms                     |

Note that the verification times are linear in the number of blocks per step of recursion, while the proving time reduces with fewer recursive steps. In practice, you would use the output of Nova as an input to another SNARK scheme like Plonk/groth16 (as previously mentioned) to obtain full succinctness.

Additionally, these are numbers on my (not great) laptop, so you should expect better performance on a beefier machine, especially because Nova supports GPU accelerated MSMs for proving under the hood.

## In-browser proving and verification

Nova Scotia also supports proving and verification of proofs in browser, along with serde of proofs and public parameters. We provide an example of in-browser proving using Rust compiled to WASM in the [`browser-test`](https://github.com/nalinbhardwaj/Nova-Scotia/tree/main/browser-test) folder of the repository. The [`test-client`](https://github.com/nalinbhardwaj/Nova-Scotia/tree/main/browser-test/test-client) in the folder is a Create React App demonstrating in-browser proving and verification. If you are interested in similar usage, please look through the folders to understand how they work. It may also be useful to look at the [halo2 guide to WASM compiling](https://zcash.github.io/halo2/user/wasm-port.html).

![image](https://user-images.githubusercontent.com/6984346/216265979-5a7e3081-5211-4327-a12b-5fb3178d1016.png)

## Notes for interested contributors

Please see [GitHub issues](https://github.com/nalinbhardwaj/Nova-Scotia/issues) if you are interested in contributing. You can reach out to me directly on Telegram at @nibnalin if you have any questions.

### Credits

Credits to the original [Nova implementation and paper](https://github.com/microsoft/Nova) by Srinath Setty/Microsoft Research, and the [Circom language](https://github.com/iden3/circom) from the iden3 team.

The parsing and generation strongly borrows from other similar repos like [plonkit](https://github.com/Fluidex/plonkit), [ark-circom](https://github.com/gakonst/ark-circom), [zkutil](https://github.com/poma/zkutil) etc.

I have never been to Nova Scotia. This repo is named Nova Scotia because crypto already has [Tornado Cash Nova](https://tornado-cash.medium.com/tornado-cash-introduces-arbitrary-amounts-shielded-transfers-8df92d93c37c) and [Arbitrum Nova](https://nova.arbitrum.io) besides Microsoft Nova, so its time we start adding suffixes to the term to maximize confusion around it.

The art at the top of the page is by [Tadashi Moriyama](https://www.tadashimoriyama.com/portfolio?pgid=jy5bsm8q-ddbca395-1a1d-4936-a014-a924a5ca4e1e), all credits to him. I'm just a fan of it. :)
