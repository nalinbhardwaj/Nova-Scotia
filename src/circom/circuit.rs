use bellpepper_core::{num::AllocatedNum, ConstraintSystem, LinearCombination, SynthesisError};
use nova_snark::traits::circuit::StepCircuit;
use serde::{Deserialize, Serialize};
use std::collections::BTreeMap;
use std::str;

use ff::PrimeField;

#[derive(Serialize, Deserialize)]
pub struct CircuitJson {
    pub constraints: Vec<Vec<BTreeMap<String, String>>>,
    #[serde(rename = "nPubInputs")]
    pub num_inputs: usize,
    #[serde(rename = "nOutputs")]
    pub num_outputs: usize,
    #[serde(rename = "nVars")]
    pub num_variables: usize,
}

pub type Constraint<Fr> = (Vec<(usize, Fr)>, Vec<(usize, Fr)>, Vec<(usize, Fr)>);

#[derive(Clone)]
pub struct R1CS<Fr: PrimeField> {
    pub num_inputs: usize,
    pub num_aux: usize,
    pub num_variables: usize,
    pub constraints: Vec<Constraint<Fr>>,
}

#[derive(Clone)]
pub struct CircomCircuit<Fr: PrimeField> {
    pub r1cs: R1CS<Fr>,
    pub witness: Option<Vec<Fr>>,
    // debug symbols
}

impl<'a, Fr: PrimeField> CircomCircuit<Fr> {
    pub fn get_public_outputs(&self) -> Vec<Fr> {
        // NOTE: assumes exactly half of the (public inputs + outputs) are outputs
        let pub_output_count = (self.r1cs.num_inputs - 1) / 2;
        let mut z_out: Vec<Fr> = vec![];
        for i in 1..self.r1cs.num_inputs {
            // Public inputs do not exist, so we alloc, and later enforce equality from z values
            let f: Fr = {
                match &self.witness {
                    None => Fr::ONE,
                    Some(w) => w[i],
                }
            };

            if i <= pub_output_count {
                // public output
                z_out.push(f);
            }
        }

        z_out
    }

    pub fn vanilla_synthesize<CS: ConstraintSystem<Fr>>(
        &self,
        cs: &mut CS,
        z: &[AllocatedNum<Fr>],
    ) -> Result<Vec<AllocatedNum<Fr>>, SynthesisError> {
        // println!("witness: {:?}", self.witness);
        // // println!("wire_mapping: {:?}", self.wire_mapping);
        // // println!("aux_offset: {:?}", self.aux_offset);
        // println!("num_inputs: {:?}", self.r1cs.num_inputs);
        // println!("num_aux: {:?}", self.r1cs.num_aux);
        // println!("num_variables: {:?}", self.r1cs.num_variables);
        // println!("constraints: {:?}", self.r1cs.constraints);
        // println!(
        //     "z: {:?}",
        //     z.into_iter().map(|x| x.get_value()).collect::<Vec<_>>()
        // );

        let witness = &self.witness;

        let mut vars: Vec<AllocatedNum<Fr>> = vec![];
        let mut z_out: Vec<AllocatedNum<Fr>> = vec![];
        let pub_output_count = (self.r1cs.num_inputs - 1) / 2;

        for i in 1..self.r1cs.num_inputs {
            // Public inputs do not exist, so we alloc, and later enforce equality from z values
            let f: Fr = {
                match witness {
                    None => Fr::ONE,
                    Some(w) => w[i],
                }
            };
            let v = AllocatedNum::alloc(cs.namespace(|| format!("public_{}", i)), || Ok(f))?;

            vars.push(v.clone());
            if i <= pub_output_count {
                // public output
                z_out.push(v);
            }
        }
        for i in 0..self.r1cs.num_aux {
            // Private witness trace
            let f: Fr = {
                match witness {
                    None => Fr::ONE,
                    Some(w) => w[i + self.r1cs.num_inputs],
                }
            };

            let v = AllocatedNum::alloc(cs.namespace(|| format!("aux_{}", i)), || Ok(f))?;
            vars.push(v);
        }

        let make_lc = |lc_data: Vec<(usize, Fr)>| {
            let res = lc_data.iter().fold(
                LinearCombination::<Fr>::zero(),
                |lc: LinearCombination<Fr>, (index, coeff)| {
                    lc + if *index > 0 {
                        (*coeff, vars[*index - 1].get_variable())
                    } else {
                        (*coeff, CS::one())
                    }
                },
            );
            res
        };
        for (i, constraint) in self.r1cs.constraints.iter().enumerate() {
            cs.enforce(
                || format!("constraint {}", i),
                |_| make_lc(constraint.0.clone()),
                |_| make_lc(constraint.1.clone()),
                |_| make_lc(constraint.2.clone()),
            );
        }

        for i in (pub_output_count + 1)..self.r1cs.num_inputs {
            cs.enforce(
                || format!("pub input enforce {}", i),
                |lc| lc + z[i - 1 - pub_output_count].get_variable(),
                |lc| lc + CS::one(),
                |lc| lc + vars[i - 1].get_variable(),
            );
        }

        Ok(z_out)
    }
}

impl<'a, Fr: PrimeField> StepCircuit<Fr> for CircomCircuit<Fr> {
    fn arity(&self) -> usize {
        (self.r1cs.num_inputs - 1) / 2
    }

    fn synthesize<CS: ConstraintSystem<Fr>>(
        &self,
        cs: &mut CS,
        z: &[AllocatedNum<Fr>],
    ) -> Result<Vec<AllocatedNum<Fr>>, SynthesisError> {
        // synthesize the circuit
        let z_out = self.vanilla_synthesize(cs, z);

        z_out
    }
}
