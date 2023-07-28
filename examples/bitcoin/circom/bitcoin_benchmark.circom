pragma circom 2.0.8;

include "node_modules/circomlib/circuits/poseidon.circom";
include "node_modules/circomlib/circuits/bitify.circom";
include "node_modules/circomlib/circuits/gates.circom";
include "node_modules/circomlib/circuits/sha256/sha256.circom";

template bitwiseOR(bits) {
    signal input in[2];
    signal output out;

    component bitified[2];
    for (var i = 0;i < 2;i++) {
        bitified[i] = Num2Bits(bits);
        bitified[i].in <== in[i];
    }

    component fullOR = Bits2Num(bits);
    component bitOR[bits];
    for (var i = 0;i < bits;i++) {
        bitOR[i] = OR();
        bitOR[i].a <== bitified[0].out[i];
        bitOR[i].b <== bitified[1].out[i];
        fullOR.in[i] <== bitOR[i].out;
    }
    out <== fullOR.out;
}

template ShiftLeft() {
    signal input in;
    signal input shift;
    signal output out;

    var MAXLEN = 250;

    component isStillLessThan[MAXLEN];
    for (var i = 0;i < MAXLEN;i++) {
        isStillLessThan[i] = LessThan(10);
        isStillLessThan[i].in[0] <== i;
        isStillLessThan[i].in[1] <== shift;
    }

    signal computer[MAXLEN];
    for (var i = 0;i < MAXLEN;i++) {
        computer[i] <== (i == 0 ? in : computer[i - 1]) * (1 + isStillLessThan[i].out);
    }
    out <== computer[MAXLEN - 1];
}


template getTarget() {
    signal input targetBytes[4];
    signal output target;
    
    signal exp;
    exp <== targetBytes[3];
    signal mantissa;
    mantissa <== targetBytes[2];

    component mantshift = ShiftLeft();
    mantshift.in <== mantissa;
    mantshift.shift <== 8;

    component mantv2or = bitwiseOR(250);
    mantv2or.in[0] <== targetBytes[1];
    mantv2or.in[1] <== mantshift.out;

    component mantshift2 = ShiftLeft();
    mantshift2.in <== mantv2or.out;
    mantshift2.shift <== 8;

    component mantv3or = bitwiseOR(250);
    mantv3or.in[0] <== targetBytes[0];
    mantv3or.in[1] <== mantshift2.out;
    
    // log("mantissa", mantv3or.out);
    component targetcompute = ShiftLeft();
    targetcompute.in <== mantv3or.out;
    targetcompute.shift <== 8 * (exp - 3);
    
    target <== targetcompute.out;
}

template CheckOneBlock() {
    signal input prevBlockHash[2];
    signal input blockHash[2]; // store 256 bits divided in 2 parts of 128 bits

    signal input blockHeaders[80];

    // check the block hash
    component blockHeaderToBits[80];
    component firstHash = Sha256(80*8);
    for (var i = 0;i < 80;i++) {
        blockHeaderToBits[i] = Num2Bits(8);
        blockHeaderToBits[i].in <== blockHeaders[i];
        for (var j = 0;j < 8;j++) {
            firstHash.in[i*8 + j] <== blockHeaderToBits[i].out[7 - j];
        }
    }
    component secondHash = Sha256(256);
    for (var i = 0;i < 256;i++) {
        secondHash.in[i] <== firstHash.out[i];
    }

    component inputBlockHashToBits[2];
    inputBlockHashToBits[0] = Num2Bits(128);
    inputBlockHashToBits[0].in <== blockHash[0];
    inputBlockHashToBits[1] = Num2Bits(128);
    inputBlockHashToBits[1].in <== blockHash[1];
    signal inputBlockHashBits[256];
    for (var i = 0;i < 128;i++) {
        inputBlockHashBits[255 - i] <== inputBlockHashToBits[0].out[i];
        inputBlockHashBits[255 - (i + 128)] <== inputBlockHashToBits[1].out[i];
    }

    for (var i = 0;i < 256;i++) {
        // log(secondHash.out[i]);
        secondHash.out[i] === inputBlockHashBits[i];
    }
    
    // check prev hash
    component inputPrevBlockHashToBits[2];
    inputPrevBlockHashToBits[0] = Num2Bits(128);
    inputPrevBlockHashToBits[0].in <== prevBlockHash[0];
    inputPrevBlockHashToBits[1] = Num2Bits(128);
    inputPrevBlockHashToBits[1].in <== prevBlockHash[1];

    signal inputPrevBlockHashBits[256];
    for (var i = 0;i < 128;i++) {
        // log(inputBlockHashToBits[0].out[i]);
        inputPrevBlockHashBits[255 - i] <== inputPrevBlockHashToBits[0].out[i];
        inputPrevBlockHashBits[255 - (i + 128)] <== inputPrevBlockHashToBits[1].out[i];
    }

    // for (var i = 0;i < 256;i++) {
    //     log(inputPrevBlockHashBits[i]);
    // }

    var bitIdx = 0;
    for (var byteIdx = 4;byteIdx < 36;byteIdx++) {
        for (var i = 0;i < 8;i++) {
            // log(blockHeaderToBits[byteIdx].out[7 - i]);
            blockHeaderToBits[byteIdx].out[7 - i] === inputPrevBlockHashBits[bitIdx];
            bitIdx++;
        }
    }

    // check target
    component targetComputer = getTarget();
    component flippedTargBits[4];
    for (var i = 0;i < 4;i++) {
        flippedTargBits[i] = Bits2Num(8);
        for (var j = 0;j < 8;j++) {
            flippedTargBits[i].in[j] <== blockHeaderToBits[i + 72].out[7 - j];
        }
        targetComputer.targetBytes[i] <== blockHeaders[i + 72];
    }

    component computeFlippedBlockHash = Bits2Num(250);
    for (var i = 0;i < 80;i++) {
        for (var j = 0;j < 8;j++) {
            if (i * 8 + j < 250) {
                computeFlippedBlockHash.in[i * 8 + j] <== inputBlockHashBits[i * 8 + (7 - j)];
            }
        }
    }
    // log("computeFlippedBlockHash", computeFlippedBlockHash.out);
    
    component blockHashMatchTarget = LessThan(252);
    blockHashMatchTarget.in[0] <== computeFlippedBlockHash.out;
    blockHashMatchTarget.in[1] <== targetComputer.target;
    blockHashMatchTarget.out === 1;
}

template Main(BLOCK_COUNT) {
    signal input step_in[2];
    signal output step_out[2]; // last block hash
    signal input blockHashes[BLOCK_COUNT][2];
    signal input blockHeaders[BLOCK_COUNT][80];

    signal prevBlockHash[2];
    prevBlockHash[0] <== step_in[0];
    prevBlockHash[1] <== step_in[1];


    component checker[BLOCK_COUNT];
    for (var i = 0;i < BLOCK_COUNT;i++) {
        checker[i] = CheckOneBlock();
        if (i == 0) {
            for (var j = 0;j < 2;j++) checker[i].prevBlockHash[j] <== prevBlockHash[j];
        } else {
            for (var j = 0;j < 2;j++) checker[i].prevBlockHash[j] <== blockHashes[i-1][j];
        }
        for (var j = 0;j < 2;j++) checker[i].blockHash[j] <== blockHashes[i][j];
        for (var j = 0;j < 80;j++) {
            checker[i].blockHeaders[j] <== blockHeaders[i][j];
        }
    }
    for (var j = 0;j < 2;j++) step_out[j] <== blockHashes[BLOCK_COUNT - 1][j];
}

component main { public [step_in] } = Main(1);
