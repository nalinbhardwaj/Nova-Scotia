pragma circom 2.0.3;

// include "https://github.com/0xPARC/circom-secp256k1/blob/master/circuits/bigint.circom";

template Example () {
    signal output a;
    signal input b;
    signal input c;

    a <== b + c;
}

component main = Example();

/* INPUT = {
    "b": "5",
    "c": "5"
} */