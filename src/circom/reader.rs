use anyhow::bail;
use byteorder::{LittleEndian, ReadBytesExt};
use itertools::Itertools;
use std::collections::BTreeMap;
use std::fs::{File, OpenOptions};
use std::io::{BufReader, Read, Seek};
use std::path::Path;
use std::str;

use crate::circom::circuit::{CircomCircuit, CircuitJson, R1CS};
use crate::circom::file::{from_reader, read_field};
use ff::PrimeField;
use pasta_curves::group::Group;

type G1 = pasta_curves::pallas::Point;
type G2 = pasta_curves::vesta::Point;

/// load witness file by filename with autodetect encoding (bin or json).
pub fn load_witness_from_file<Fr: PrimeField>(filename: &Path) -> Vec<Fr> {
    if filename.ends_with("json") {
        load_witness_from_json_file::<Fr>(filename)
    } else {
        load_witness_from_bin_file::<Fr>(filename)
    }
}

/// load witness from json file by filename
pub fn load_witness_from_json_file<Fr: PrimeField>(filename: &Path) -> Vec<Fr> {
    let reader = OpenOptions::new()
        .read(true)
        .open(filename)
        .expect("unable to open.");
    load_witness_from_json::<Fr, BufReader<File>>(BufReader::new(reader))
}

/// load witness from json by a reader
fn load_witness_from_json<Fr: PrimeField, R: Read>(reader: R) -> Vec<Fr> {
    let witness: Vec<String> = serde_json::from_reader(reader).expect("unable to read.");
    witness
        .into_iter()
        .map(|x| Fr::from_str_vartime(&x).unwrap())
        .collect::<Vec<Fr>>()
}

/// load witness from bin file by filename
pub fn load_witness_from_bin_file<Fr: PrimeField>(filename: &Path) -> Vec<Fr> {
    let reader = OpenOptions::new()
        .read(true)
        .open(filename)
        .expect("unable to open.");
    load_witness_from_bin_reader::<Fr, BufReader<File>>(BufReader::new(reader))
        .expect("read witness failed")
}

/// load witness from u8 array
pub fn load_witness_from_array<Fr: PrimeField>(buffer: Vec<u8>) -> Result<Vec<Fr>, anyhow::Error> {
    load_witness_from_bin_reader::<Fr, _>(buffer.as_slice())
}

/// load witness from u8 array by a reader
fn load_witness_from_bin_reader<Fr: PrimeField, R: Read>(
    mut reader: R,
) -> Result<Vec<Fr>, anyhow::Error> {
    let mut wtns_header = [0u8; 4];
    reader.read_exact(&mut wtns_header)?;
    if wtns_header != [119, 116, 110, 115] {
        // ruby -e 'p "wtns".bytes' => [119, 116, 110, 115]
        bail!("invalid file header");
    }
    let version = reader.read_u32::<LittleEndian>()?;
    println!("wtns version {}", version);
    if version > 2 {
        bail!("unsupported file version");
    }
    let num_sections = reader.read_u32::<LittleEndian>()?;
    if num_sections != 2 {
        bail!("invalid num sections");
    }
    // read the first section
    let sec_type = reader.read_u32::<LittleEndian>()?;
    if sec_type != 1 {
        bail!("invalid section type");
    }
    let sec_size = reader.read_u64::<LittleEndian>()?;
    if sec_size != 4 + 32 + 4 {
        bail!("invalid section len")
    }
    let field_size = reader.read_u32::<LittleEndian>()?;
    if field_size != 32 {
        bail!("invalid field byte size");
    }
    let mut prime = vec![0u8; field_size as usize];
    reader.read_exact(&mut prime)?;
    // if prime != hex!("010000f093f5e1439170b97948e833285d588181b64550b829a031e1724e6430") {
    //     bail!("invalid curve prime {:?}", prime);
    // }
    let witness_len = reader.read_u32::<LittleEndian>()?;
    println!("witness len {}", witness_len);
    let sec_type = reader.read_u32::<LittleEndian>()?;
    if sec_type != 2 {
        bail!("invalid section type");
    }
    let sec_size = reader.read_u64::<LittleEndian>()?;
    if sec_size != (witness_len * field_size) as u64 {
        bail!("invalid witness section size {}", sec_size);
    }
    let mut result = Vec::with_capacity(witness_len as usize);
    for _ in 0..witness_len {
        result.push(read_field::<&mut R, Fr>(&mut reader)?);
    }
    Ok(result)
}

/// load r1cs file by filename with autodetect encoding (bin or json)
pub fn load_r1cs(filename: &Path) -> R1CS<<G1 as Group>::Scalar> {
    if filename.ends_with("json") {
        load_r1cs_from_json_file(filename)
    } else {
        let (r1cs, _wire_mapping) = load_r1cs_from_bin_file(filename);
        r1cs
    }
}

/// load r1cs from json file by filename
fn load_r1cs_from_json_file<Fr: PrimeField>(filename: &Path) -> R1CS<Fr> {
    let reader = OpenOptions::new()
        .read(true)
        .open(filename)
        .expect("unable to open.");
    load_r1cs_from_json(BufReader::new(reader))
}

/// load r1cs from json by a reader
fn load_r1cs_from_json<Fr: PrimeField, R: Read>(reader: R) -> R1CS<Fr> {
    let circuit_json: CircuitJson = serde_json::from_reader(reader).expect("unable to read.");

    let num_inputs = circuit_json.num_inputs + circuit_json.num_outputs + 1;
    let num_aux = circuit_json.num_variables - num_inputs;

    let convert_constraint = |lc: &BTreeMap<String, String>| {
        lc.iter()
            .map(|(index, coeff)| (index.parse().unwrap(), Fr::from_str_vartime(coeff).unwrap()))
            .collect_vec()
    };

    let constraints = circuit_json
        .constraints
        .iter()
        .map(|c| {
            (
                convert_constraint(&c[0]),
                convert_constraint(&c[1]),
                convert_constraint(&c[2]),
            )
        })
        .collect_vec();

    R1CS {
        num_inputs,
        num_aux,
        num_variables: circuit_json.num_variables,
        constraints,
    }
}

/// load r1cs from bin file by filename
fn load_r1cs_from_bin_file(filename: &Path) -> (R1CS<<G1 as Group>::Scalar>, Vec<usize>) {
    let reader = OpenOptions::new()
        .read(true)
        .open(filename)
        .expect("unable to open.");
    load_r1cs_from_bin(BufReader::new(reader))
}

/// load r1cs from bin by a reader
fn load_r1cs_from_bin<R: Read + Seek>(reader: R) -> (R1CS<<G1 as Group>::Scalar>, Vec<usize>) {
    let file = from_reader(reader).expect("unable to read.");
    let num_inputs = (1 + file.header.n_pub_in + file.header.n_pub_out) as usize;
    let num_variables = file.header.n_wires as usize;
    let num_aux = num_variables - num_inputs;
    (
        R1CS {
            num_aux,
            num_inputs,
            num_variables,
            constraints: file.constraints,
        },
        file.wire_mapping.iter().map(|e| *e as usize).collect_vec(),
    )
}

mod tests {
    use std::path::Path;

    use pasta_curves::group::Group;

    use crate::circom::{
        circuit::CircomCircuit,
        reader::{load_r1cs, load_witness_from_file},
    };

    type G1 = pasta_curves::pallas::Point;
    type G2 = pasta_curves::vesta::Point;

    #[test]
    fn load_sample() {
        let circuit_file =
            Path::new("/Users/nibnalin/Documents/Nova/examples/circom/artifacts/main.r1cs");
        let witness_file =
            Path::new("/Users/nibnalin/Documents/Nova/examples/circom/artifacts/witness.wtns");

        let circuit = CircomCircuit {
            r1cs: load_r1cs(&circuit_file),
            witness: Some(load_witness_from_file::<<G1 as Group>::Scalar>(
                &witness_file,
            )),
            wire_mapping: None,
            aux_offset: 1,
        };

        // println!("circuit: {:?}", circuit);
    }
}
