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
  const [ans, setAns] = useState(0);

  async function test() {
    const start = performance.now();
    await workerApi.test_nova_scotia();
    console.log("time", performance.now() - start);
  }

  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.tsx</code> and save to reload.
        </p>
        {ans}
        <button onClick={test}>test</button>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
      </header>
    </div>
  );
}

export default App;
