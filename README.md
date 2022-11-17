# Nova Scotia

### Middleware to compile [Circom](https://github.com/iden3/circom) circuits to [Nova](https://github.com/microsoft/Nova) prover

<img width="100%" src="https://user-images.githubusercontent.com/6984346/201644366-a9be1826-81cc-4b78-91c0-2086241e5130.png" alt="Original from Tadashi Moriyama">

This repository provides necessary middleware to take generated output of the Circom compiler (R1CS constraints and generated witnesses) and use them with Nova as a prover.

## Why?

Nova is the state of the art for recursive SNARKs, Circom is the state of the art for ZK devtooling, so it makes a lot of sense to want to do this. Since Nova uses ~R1CS arithmetization, its mostly just a matter of parsing Circom output into something Nova can use.

As [Justin Drake talks about it](https://youtu.be/SwonTtOQzAk), I think the right way to think of Nova is as a preprocessor for zkSNARKs with lots of repeated structure -- Nova can shrink the cost (in number of R1CS constraints) of checking N instances of a problem to ~one instance of the same problem. This is clean and magical and lends itself well to a world where we take the output of Nova and then verify it in a "real" zkSNARK (like PLONK/groth16/Spartan) to obtain a actually fully minified proof (that is sublinear even in the size of one instance). Notably, [this pattern is already used](https://youtu.be/VmYpbFxBdtM?t=155) in settings like [zkEVMs](https://youtu.be/j7An-33_Zs0), but with STARK proofs instead of Nova proofs. IMO, Nova (and folding scheme-like things in particular) lend themselves better to the properties we want with the preprocessing layer vs. STARKs: fast compression, minimal cryptographic assumptions and low recursive overhead.[^1]

[^1]: But currently, Nova/R1CS lacks the customizability of STARKS (custom gates and lookup tables in particular), so there is a tradeoff here.

## How?

![Nova Scotia](https://user-images.githubusercontent.com/6984346/201644973-fb084b6c-3807-4bf4-99bf-a1461271f1b5.png)

To use it yourself, install this branch of [Circom](https://docs.circom.io) which adds support for the [Pasta Curves](https://electriccoin.co/blog/the-pasta-curves-for-halo-2-and-beyond/) to the C++ witness generator: [nalinbhardwaj/pasta](https://github.com/nalinbhardwaj/circom/tree/pasta). To install this branch, clone the git repo (using `git clone https://github.com/nalinbhardwaj/circom.git && git checkout pasta`). Then build and install the `circom` binary by running `cargo build --release && cargo install --path circom`. This will overwrite any existing `circom` binary. Refer to the [Circom documentation](https://docs.circom.io/getting-started/installation/#installing-dependencies) for more information.

### Writing Nova Step Circuits in Circom

To write Nova Scotia circuits in Circom, we operate on the abstraction of one step of recursion. We write a circuit that takes a list of public inputs (named `step_in`) and outputs the same number of public outputs. These public outputs will then be routed to the next step of recursion as `step_in`, and this will continue until we reach the end of the recursion iterations. Within a step circuit, besides the public inputs, Circom circuits can input additional private inputs (with any name/JSON structure Circom will accept). We will instrument the piping of these private inputs in our Rust shimming.

When you're ready, compile your circuit using `circom [file].circom --r1cs --sym --c --prime vesta` for the vesta curve. Compile the C++ witness generator in `[file]_cpp` by running `make` in that folder. We will later use the R1CS file and the witness generator binary, so make note of their filepaths. You can independently test these step circuits by running witness generation as described in the [Circom documentation](https://docs.circom.io/getting-started/computing-the-witness/).

### Rust shimming for Nova Scotia

Now, start a new Rust project and add Nova Scotia to your dependencies. Then, you can start using your Circom step circuits with Nova. Start by defining the paths to the Circom output and loading the R1CS file:

```rust
let circuit_file = root.join("examples/bitcoin/circom/bitcoin_benchmark.r1cs");
let witness_generator_file =
    root.join("examples/bitcoin/circom/bitcoin_benchmark_cpp/bitcoin_benchmark");

let r1cs = load_r1cs(&circuit_file); // loads R1CS file into memory
```

Then, create the public parameters (CRS) using the `create_public_params` function:

```rust
let pp = create_public_params(r1cs.clone());
```

Now, construct the input to Circom witness generator at each step of recursion. This is a HashMap representation of the JSON input to your Circom input. For instance, in the case of the [bitcoin](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin.rs#L40) example, `private_inputs` is a list of `HashMap`s, each containing block headers and block hashes for the blocks that step of recursion verifies, and the public input `step_in` is the previous block hash in the chain.

To instantiate this recursion, we use `create_recursive_circuit` from Nova Scotia:

```rust
let recursive_snark = create_recursive_circuit(
    witness_generator_file,
    r1cs,
    private_inputs,
    start_public_input.clone(),
    &pp,
).unwrap();
```

Verification is done using the `verify` function defined by Nova, which additionally takes secondary inputs that Nova Scotia will initialise to `vec![<G2 as Group>::Scalar::zero()]`, so just pass that in:

```rust
println!("Verifying a RecursiveSNARK...");
let start = Instant::now();
let res = recursive_snark.verify(
    &pp,
    iteration_count,
    start_public_input.clone(),
    vec![<G2 as Group>::Scalar::zero()],
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

bitcoin.rs is a more complex example that uses Nova to create a prover for bitcoin chain proof-of-work. For nearly the cost of just one block proof-of-work verification, Nova can compress the verification of the entire bitcoin chain. [The Circom circuit is more complex](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin/circom/bitcoin.circom) for this construction (since it runs hashing and other bit-twiddling to verify each block in ~150k constraints). This is also helpful to look at for [benchmarking](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/examples/bitcoin.rs#L23) purposes, since you can play around with the number of blocks verified in each step of recursion. Here are some simple benchmarks for different configurations of recursion for 120 blocks being proven and verified:

| Number of recursion steps | Blocks verified per step | Prover time | Verifier time (uncompressed) |
| ------------------------- | ------------------------ | ----------- | ---------------------------- |
| 120                       | 1                        | 66.054s     | 234.197ms                    |
| 60                        | 2                        | 62.959s     | 555.845ms                    |
| 40                        | 3                        | 66.785s     | 818.208ms                    |
| 30                        | 4                        | 59.006s     | 968.347ms                    |
| 24                        | 5                        | 57.679s     | 1.237s                       |

Note that the verification times are linear in the number of blocks per step of recursion, while the proving time reduces with fewer recursive steps. In practice, you would use the output of Nova as an input to another SNARK scheme like Plonk/groth16 (as previously mentioned) to obtain full succinctness.

Additionally, these are numbers on my (not great) laptop, so you should expect better performance on a beefier machine, especially because Nova supports GPU accelerated MSMs for proving under the hood.

## Notes for interested contributors

### TODO list

- [ ] Switch Nova to BN254/grumpkin cycle to make it work on Ethereum chain! This should be doable since Nova only needs DLOG hardness.
- [ ] Add support to Circom WASM witness generator: While the C witness generator is faster and feature complete, its incompatible with M1 Macs and/or browsers. The WASM witness generator is slower but far more portable.
- [ ] Write Relaxed R1CS verifiers in plonk/groth16 libraries (ex. Halo 2, Circom).
- [ ] Make Nova work with secp/secq cycle for efficient ECDSA signature verification + aggregation

Seperately, since Nova's `StepCircuit` trait is pretty much the same as Bellperson's `Circuit` trait, we can probably also use the transpilation in this repo to use [Bellperson](https://github.com/filecoin-project/bellperson) with Circom circuits/proofs, along with its [snarkpack](https://eprint.iacr.org/2021/529) aggregation features.

If you are interested in any of these tasks and want to work on them, please reach out! [0xPARC's PARC Squad](https://0xparc.org/blog/parc-squad) may also be able to provide financial and technical support for related work.

### Credits

Credits to the original [Nova implementation and paper](https://github.com/microsoft/Nova) by Srinath Setty/Microsoft Research, and the [Circom language](https://github.com/iden3/circom) from the iden3 team.

The parsing and generation strongly borrows from other similar repos like [plonkit](https://github.com/Fluidex/plonkit), [ark-circom](https://github.com/gakonst/ark-circom), [zkutil](https://github.com/poma/zkutil) etc.

I have never been to Nova Scotia. This repo is named Nova Scotia because crypto already has [Tornado Cash Nova](https://tornado-cash.medium.com/tornado-cash-introduces-arbitrary-amounts-shielded-transfers-8df92d93c37c) and [Arbitrum Nova](https://nova.arbitrum.io) besides Microsoft Nova, so its time we start adding suffixes to the term to maximize confusion around it.

The art at the top of the page is by [Tadashi Moriyama](https://www.tadashimoriyama.com/portfolio?pgid=jy5bsm8q-ddbca395-1a1d-4936-a014-a924a5ca4e1e), all credits to him. I'm just a fan of it. :)
