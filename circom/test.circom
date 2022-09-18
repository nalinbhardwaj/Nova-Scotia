pragma circom 2.0.3;

// include "https://github.com/0xPARC/circom-secp256k1/blob/master/circuits/bigint.circom";

template Example () {
    signal input a;
    signal input b;
    signal input e;

    signal c;
    c <== a + b;
    e === a * b - c;
}

component main { public [a] } = Example();

/* INPUT = {
    "a": "5",
    "b": "5",
    "e": "15"
} */