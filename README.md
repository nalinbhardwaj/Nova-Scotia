# Nova Scotia

### Middleware to compile [Circom](https://github.com/iden3/circom) circuits to [Nova](https://github.com/microsoft/Nova) prover

This repository provides necessary middleware to take generated output of the Circom compiler (R1CS constraints and generated witnesses) and use them with Nova as a prover.

*Note: Currently in active development, many things probably don't work :)*

I've done a reasonable bit of testing and am confident the circuit in [test.circom](https://github.com/nalinbhardwaj/Nova-Scotia/blob/main/circom/test.circom) right now works.

## Why?

Nova is the state of the art for ZK recursion, Circom is the state of the art for ZK devtooling, so it makes a lot of sense to want to do this. Since Nova uses R1CS arithmetization, its mostly just a matter of parsing Circom output into something Nova can use.

## How?

To use it yourself, install this branch of [Circom] which adds support for the [Pasta Curves](https://electriccoin.co/blog/the-pasta-curves-for-halo-2-and-beyond/) to the C++ witness generator: [nalinbhardwaj/pasta](https://github.com/nalinbhardwaj/circom/tree/pasta).

Then, compile your circuit using `circom [file].circom --r1cs --sym --c --prime pallas` for the Pallas curve. Generate a witness using the C++ witness generator in `[file]_cpp`, and pass the witness and r1cs to Nova Scotia.

## TODO

- [ ] Understand public inputs much better
- [ ] Build gluing logic for multi-proof aggregation
    - [ ] Make it work with inputs passed between each other
- [ ] Understand and fix `z[i] = 0` breakages.

I have never been to Nova Scotia. This repo is named Nova Scotia because there is already Tornado Cash Nova, Arbitrum Nova and Microsoft Nova, so its time we start adding suffixes to the term Nova to maximize confusion around it.

Additionally, since Nova's `StepCircuit` trait is pretty much the same as Bellperson's `Circuit` trait, we can probably also use the transpilation in this repo to use Bellperson with Circom, along with its [snarkpack](https://eprint.iacr.org/2021/529) aggregation features.
