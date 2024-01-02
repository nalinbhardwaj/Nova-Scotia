# Getting Started with the `bitcoin` Example

### 1. Install Packages
Before running the bitcoin example, you need to install the necessary packages such as `circomlib`. Navigate to the circom directory and use yarn (or npm) for installation:

```sh
#!/bin/bash

cd ./examples/bitcoin/circom
yarn # Alternatively, use npm install (npm i)
```

### 2. Run the script for compiling C++ witness generator
When running the compile script, add `BLOCK_COUNT` as an argument.
```sh
#!/bin/bash

# sh ./examples/bitcoin/circom/compile.sh BLOCK_COUNT
sh ./examples/bitcoin/circom/compile.sh 120
```

Note: If you encounter a "ghead: not found" error, try installing `coreutils` or use the `head` command instead of `ghead` in `compile.sh`. Both commands provide the same functionality.
```sh
# In examples/bitcoin/circom/compile.sh

cd examples/bitcoin/circom
# ghead -n -1 bitcoin.circom > bitcoin_benchmark.circom
head -n -1 bitcoin.circom > bitcoin_benchmark.circom
echo "component main { public [step_in] } = Main($1);" >> bitcoin_benchmark.circom
circom bitcoin_benchmark.circom --r1cs --sym --c --prime vesta
cd bitcoin_benchmark_cpp && make
```

### 3. Execute the `bitcoin.rs`
This process may take some time, so please be patient and monitor the logs for progress.
```sh
#!/bin/bash

cargo run --package nova-scotia --example bitcoin
```

The bench function in `bitcoin.rs` will execute five times in total, each with a varying number of recursion steps (120, 60, 40, 30, 24).

| iteration_count | per_iteration_count | prover_time      | verifier_time   |
|-----------------|---------------------|------------------|-----------------|
| 120             | 1                   | 178.899148634s   | 991.922015ms    |
| 60              | 2                   | 141.472247116s   | 1.737021311s    |
| 40              | 3                   | 131.566233668s   | 2.77915948s     |
| 30              | 4                   | 117.359476284s   | 3.140047374s    |
| 24              | 5                   | 112.845208954s   | 4.006640945s    |


On my laptop, the execution time $\approx$ 40 minutes for the configs of both `BLOCK_COUNT=1` and `BLOCK_COUNT=24`. You can use the log below as a reference for what to expect:

```text
Number of constraints per step (primary circuit): 110566
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 108355
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 178.899148835s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 991.878893ms
Number of constraints per step (primary circuit): 211314
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 206898
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 141.472247299s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 1.73698708s
Number of constraints per step (primary circuit): 312062
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 305441
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 131.566233849s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 2.779121858s
Number of constraints per step (primary circuit): 412810
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 403984
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 117.359476464s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 3.140001019s
Number of constraints per step (primary circuit): 513558
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 502527
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 112.845209134s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 4.006571062s
```