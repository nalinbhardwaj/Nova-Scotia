import { expose } from "comlink";

async function generate_params() {
  const multiThread = await import("nova_scotia_browser");
  await multiThread.default();
  await multiThread.initThreadPool(navigator.hardwareConcurrency);

  return await multiThread.generate_params();
}

async function generate_proof(pp: string) {
  const multiThread = await import("nova_scotia_browser");
  await multiThread.default();
  await multiThread.initThreadPool(navigator.hardwareConcurrency);

  return await multiThread.generate_proof(pp);
}

async function verify_proof(pp: string, proof: string) {
  const multiThread = await import("nova_scotia_browser");
  await multiThread.default();
  await multiThread.initThreadPool(navigator.hardwareConcurrency);

  return await multiThread.verify_compressed_proof(pp, proof);
}

const exports = {
  generate_params,
  generate_proof,
  verify_proof,
};
export type NovaScotiaWorker = typeof exports;

expose(exports);
