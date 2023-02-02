import React, { useState, useEffect } from "react";
import logo from "./logo.svg";
import "./App.css";
import { wrap } from "comlink";

function App() {
  const worker = new Worker(new URL("./nova-scotia-worker", import.meta.url), {
    name: "nova-scotia-worker",
    type: "module",
  });
  const workerApi =
    wrap<import("./nova-scotia-worker").NovaScotiaWorker>(worker);
  const [pp, setPp] = useState("");
  const [proof, setProof] = useState("");
  const [ver, setVer] = useState(false);
  const [paramTime, setParamTime] = useState(-1);
  const [proofTime, setProofTime] = useState(-1);
  const [verifyTime, setVerifyTime] = useState(-1);

  async function generate_params() {
    setParamTime(0);
    const start = performance.now();
    const pp = await workerApi.generate_params();
    setPp(pp);
    setParamTime(performance.now() - start);
  }

  async function generate_proof() {
    setProofTime(0);
    const start2 = performance.now();
    const proof = await workerApi.generate_proof(pp);
    console.log("proof time", performance.now() - start2);
    setProof(proof);
    setProofTime(performance.now() - start2);
  }

  async function verify_proof() {
    setVerifyTime(0);
    const start3 = performance.now();
    const ver = await workerApi.verify_proof(pp, proof);
    console.log("verify time", performance.now() - start3);
    setVer(ver);
    setVerifyTime(performance.now() - start3);
  }

  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>Generate Public params:</p>
        <button onClick={generate_params}>Parametrize</button>
        <p>
          Generation time:{" "}
          {paramTime < 0
            ? "Not started"
            : paramTime == 0
            ? "Running"
            : (paramTime / 1000).toFixed(2) + "s"}
        </p>

        {paramTime > 0 && (
          <>
            <p>Create proof:</p>
            <button onClick={generate_proof}>Prove</button>
            <p>
              Proving time:{" "}
              {proofTime < 0
                ? "Not started"
                : proofTime == 0
                ? "Running"
                : (proofTime / 1000).toFixed(2) + "s"}
            </p>
          </>
        )}

        {proofTime > 0 && (
          <>
            <p>Verify proof:</p>
            <button onClick={verify_proof}>Verify</button>
            <p>
              Verification time:{" "}
              {verifyTime < 0
                ? "Not started"
                : verifyTime == 0
                ? "Running"
                : (verifyTime / 1000).toFixed(2) + "s"}
            </p>
          </>
        )}
      </header>
    </div>
  );
}

export default App;
