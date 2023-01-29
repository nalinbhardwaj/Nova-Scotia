import { expose } from "comlink";

async function test_nova_scotia() {
  const multiThread = await import("nova_scotia_browser");
  await multiThread.default();
  await multiThread.initThreadPool(navigator.hardwareConcurrency);
  console.log("here we go");
  await multiThread.generate_proof();
  console.log("done");
}

const exports = {
  test_nova_scotia,
};
export type NovaScotiaWorker = typeof exports;

expose(exports);
