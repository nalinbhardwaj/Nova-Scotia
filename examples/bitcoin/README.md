# Getting Started with the `bitcoin` Example

### 1. Install Packages
Before running the `bitcoin` example, you need to install the necessary packages such as circomlib. Navigate to the `circom` directory and use yarn (or npm) for installation:

```bash
#!/bin/bash

cd ./examples/bitcoin/circom
yarn # Alternatively, use npm install (npm i)
```

### 2. Run the script for compiling C++ witness generator
When running the compile script, add `BLOCK_COUNT`` as an argument. For initial runs, it's recommended to use a lower BLOCK_COUNT for a quicker overview of the execution process.

```bash
#!/bin/bash

# sh ./examples/bitcoin/circom/compile BLOCK_COUNT
sh ./examples/bitcoin/circom/compile 1
```

### 3. Execute the `bitcoin.rs`
This process may take some time, so please be patient and monitor the logs for progress.
```bash
#!/bin/bash

cargo run --package nova-scotia --example bitcoin
```

The bench function in `bitcoin.rs` will execute five times in total, each with a varying number of recursion steps (120, 60, 40, 30, 24). On my laptop, the execution time $\approx$ 40 minutes for `BLOCK_COUNT=24` . You can use the log below as a reference for what to expect:

```text
Number of constraints per step (primary circuit): 110566
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 108355
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 196.719220299s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 1.279305062s
Number of constraints per step (primary circuit): 211314
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 206898
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 146.920712536s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 1.76427546s
Number of constraints per step (primary circuit): 312062
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 305441
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 132.631906918s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 2.997524822s
Number of constraints per step (primary circuit): 412810
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 403984
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 116.722561644s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 3.203293562s
Number of constraints per step (primary circuit): 513558
Number of constraints per step (secondary circuit): 10347
Number of variables per step (primary circuit): 502527
Number of variables per step (secondary circuit): 10329
Creating a RecursiveSNARK...
RecursiveSNARK creation took 126.563687153s
Verifying a RecursiveSNARK...
RecursiveSNARK::verify: Ok(([0x000000000000000000000000000000001c106695014e03000000000000000000, 0x0000000000000000000000000000000023261735a2927d063178f9e2558ee98f], [0x0000000000000000000000000000000000000000000000000000000000000000])), took 4.953235119s
```