#!/bin/bash

circom ./examples/toy/toy.circom --r1cs --wasm --sym --c --output ./examples/toy/pasta/ --prime vesta
cd examples/toy/pasta/toy_cpp && make
cd -

circom ./examples/toy/toy.circom --r1cs --wasm --sym --c --output ./examples/toy/bn254/ --prime bn128
cd examples/toy/bn254/toy_cpp && make