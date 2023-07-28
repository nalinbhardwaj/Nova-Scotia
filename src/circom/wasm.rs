use crate::{FileLocation, R1CS};

use crate::circom::reader::{load_r1cs_from_bin, load_witness_from_bin_reader};
use ff::PrimeField;
use js_sys::Uint8Array;
use nova_snark::traits::Group;
use std::io::Cursor;
use std::path::Path;
use wasm_bindgen::prelude::*;
use wasm_bindgen_futures::JsFuture;

#[wasm_bindgen(module = "/src/circom/wasm_deps/generate_witness_browser.js")]
extern "C" {
    fn read_file_async(path: &str) -> JsValue;
    fn generate_witness_browser_async(input_json_string: &str, wasm_file: &str) -> JsValue;
}

#[wasm_bindgen]
pub async fn read_file(path: &str) -> Uint8Array {
    let promise_as_js_value = read_file_async(path);
    let promise = js_sys::Promise::from(promise_as_js_value);
    let future = JsFuture::from(promise);
    let result: Result<JsValue, JsValue> = future.await;
    if let Ok(content) = result {
        return Uint8Array::new(&content);
    } else {
        return Uint8Array::new(&JsValue::NULL);
    }
}

#[wasm_bindgen]
pub async fn generate_witness_browser(input_json_string: &str, wasm_file: &str) -> Uint8Array {
    let promise_as_js_value = generate_witness_browser_async(input_json_string, wasm_file);
    let promise = js_sys::Promise::from(promise_as_js_value);
    let future = JsFuture::from(promise);
    let result: Result<JsValue, JsValue> = future.await;
    if let Ok(content) = result {
        return Uint8Array::new(&content);
    } else {
        return Uint8Array::new(&JsValue::NULL);
    }
}

#[cfg(target_family = "wasm")]
/// load r1cs file by filename with autodetect encoding (bin or json)
pub async fn load_r1cs<G1, G2>(filename: &FileLocation) -> R1CS<<G1 as Group>::Scalar>
where
    G1: Group<Base = <G2 as Group>::Scalar>,
    G2: Group<Base = <G1 as Group>::Scalar>,
{
    let filename = match filename {
        FileLocation::PathBuf(_) => panic!("unreachable"),
        FileLocation::URL(path) => path,
    };
    let r1cs_ser = read_file(filename).await.to_vec();
    let r1cs_cursor = Cursor::new(r1cs_ser);
    load_r1cs_from_bin::<_, G1, G2>(r1cs_cursor)
}

#[cfg(target_family = "wasm")]
pub async fn generate_witness_from_wasm<Fr: PrimeField>(
    witness_wasm: &FileLocation,
    witness_input_json: &String,
    _witness_output: &Path, // note: this is unused
) -> Vec<Fr> {
    let witness_wasm = match witness_wasm {
        FileLocation::PathBuf(_) => panic!("unreachable"),
        FileLocation::URL(path) => path,
    };
    let witness_output = generate_witness_browser(witness_input_json, witness_wasm).await;
    let witness_output = witness_output.to_vec();
    let witness_output = Cursor::new(witness_output);
    load_witness_from_bin_reader(witness_output).expect("read witness failed")
}
