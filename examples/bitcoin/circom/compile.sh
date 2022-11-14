cd examples/bitcoin/circom
ghead -n -1 bitcoin.circom > bitcoin_benchmark.circom
echo "component main { public [step_in] } = Main($1);" >> bitcoin_benchmark.circom
circom bitcoin_benchmark.circom --r1cs --sym --c --prime vesta
cd bitcoin_benchmark_cpp && make