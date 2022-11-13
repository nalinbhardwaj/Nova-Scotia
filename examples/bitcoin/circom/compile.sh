head -n -1 bitcoin.circom > bitcoin_benchmark.circom
echo "component main { public [step_in] } = Main($1);" >> bitcoin_benchmark.circom
circom bitcoin.circom --r1cs --sym --c --prime vesta
cd bitcoin_cpp && make