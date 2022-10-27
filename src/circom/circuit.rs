use bellperson::gadgets::num::AllocatedNum;
use itertools::Itertools;
use nova_snark::traits::circuit::StepCircuit;
use serde::{Deserialize, Serialize};
use std::collections::BTreeMap;
use std::str;

use ::bellperson::{ConstraintSystem, Index, LinearCombination, SynthesisError, Variable};
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
    pub wire_mapping: Option<Vec<usize>>,
    pub aux_offset: usize,
    // debug symbols
}

impl<'a, Fr: PrimeField> CircomCircuit<Fr> {
    pub fn get_public_inputs(&self) -> Option<Vec<Fr>> {
        match &self.witness {
            None => None,
            Some(w) => match &self.wire_mapping {
                None => Some(w[1..self.r1cs.num_inputs].to_vec()),
                Some(m) => Some(
                    m[1..self.r1cs.num_inputs]
                        .iter()
                        .map(|i| w[*i])
                        .collect_vec(),
                ),
            },
        }
    }

    pub fn vanilla_synthesize<CS: ConstraintSystem<Fr>>(
        &self,
        cs: &mut CS,
        z: &[AllocatedNum<Fr>],
    ) -> Result<(), SynthesisError> {
        // println!("witness: {:?}", self.witness);
        // println!("wire_mapping: {:?}", self.wire_mapping);
        // println!("aux_offset: {:?}", self.aux_offset);
        // println!("num_inputs: {:?}", self.r1cs.num_inputs);
        // println!("num_aux: {:?}", self.r1cs.num_aux);
        // println!("num_variables: {:?}", self.r1cs.num_variables);
        // println!("constraints: {:?}", self.r1cs.constraints);
        // println!(
        //     "z: {:?}",
        //     z.into_iter().map(|x| x.get_value()).collect::<Vec<_>>()
        // );

        let witness = &self.witness;
        let wire_mapping = &self.wire_mapping;

        let mut vars: Vec<Variable> = vec![];

        for i in 1..self.r1cs.num_inputs {
            // Public inputs do not exist, so we alloc, and later enforce equality from z values
            let v = cs.alloc(
                || format!("variable {}", i),
                || {
                    Ok(match witness {
                        None => Fr::one(),
                        Some(w) => match wire_mapping {
                            None => w[i],
                            Some(m) => w[m[i]],
                        },
                    })
                },
            )?;
            vars.push(v);
        }
        for i in 0..self.r1cs.num_aux {
            // Private witness trace
            let aux = cs.alloc(
                || format!("aux {}", i),
                || {
                    Ok(match witness {
                        None => Fr::one(),
                        Some(w) => match wire_mapping {
                            None => w[i + self.r1cs.num_inputs],
                            Some(m) => w[m[i + self.r1cs.num_inputs]],
                        },
                    })
                },
            )?;
            vars.push(aux);
        }

        let make_lc = |lc_data: Vec<(usize, Fr)>| {
            let res = lc_data.iter().fold(
                LinearCombination::<Fr>::zero(),
                |lc: LinearCombination<Fr>, (index, coeff)| lc + (*coeff, vars[*index - 1]),
            );
            res
        };
        for (i, constraint) in self.r1cs.constraints.iter().enumerate() {
            // print!(
            //     "constraint {} {:?} \n {:?} \n {:?} \n {:?}",
            //     i,
            //     constraint,
            //     make_lc(constraint.0.clone()),
            //     make_lc(constraint.1.clone()),
            //     make_lc(constraint.2.clone())
            // );
            cs.enforce(
                || format!("{}", i),
                |_| make_lc(constraint.0.clone()),
                |_| make_lc(constraint.1.clone()),
                |_| make_lc(constraint.2.clone()),
            );
        }

        for i in 1..self.r1cs.num_inputs {
            cs.enforce(
                || format!("{}", i),
                |lc| lc + z[i - 1].get_variable(),
                |lc| lc + CS::one(),
                |lc| lc + vars[i - 1],
            );
        }

        Ok(())
    }
}

impl<'a, Fr: PrimeField> StepCircuit<Fr> for CircomCircuit<Fr> {
    fn arity(&self) -> usize {
        2
    }

    fn synthesize<CS: ConstraintSystem<Fr>>(
        &self,
        cs: &mut CS,
        z: &[AllocatedNum<Fr>],
    ) -> Result<Vec<AllocatedNum<Fr>>, SynthesisError> {
        let mut z_out: Result<Vec<AllocatedNum<Fr>>, SynthesisError> =
            Err(SynthesisError::AssignmentMissing);

        // use the provided inputs
        let x_0 = z[0].clone();
        let x_1 = z[1].clone();
        z_out = Ok(vec![x_0.clone(), x_1.clone()]);

        // synthesize the circuit
        self.vanilla_synthesize(cs, &[x_0.clone(), x_1.clone()])?;

        z_out
    }

    fn output(&self, z: &[Fr]) -> Vec<Fr> {
        // // sanity check
        // debug_assert_eq!(z[0], self.seq[0].x_i);
        // debug_assert_eq!(z[1], self.seq[0].y_i);

        // compute output using advice
        vec![z[0], z[1]]
    }
}
