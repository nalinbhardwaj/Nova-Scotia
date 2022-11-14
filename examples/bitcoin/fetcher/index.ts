// This code is adapted from https://github.com/dcposch/btcmirror
// There is no license on that repo. All credits to the original author.
import {
  BtcRpcClient,
  createQuiknodeClient,
  getBlockCount,
  getBlockHash,
  getBlockHeader,
  JsonRpcClient,
} from "./rpc-client";
import { ethers } from "ethers";

const MAX_BLOCKS = 800;

function reverse(s: string) {
  return s.split("").reverse().join("");
}

function switchEndianness(s: string) {
  const result: string[] = [];
  let len = s.length - 2;
  while (len >= 0) {
    result.push(s.substring(len, len + 2));
    len -= 2;
  }
  return result.join("");
}

async function fullFetch() {
  const rpc = createQuiknodeClient();
  const fromHeight = 700000;
  const btcTipHeight = await getBlockCount(rpc);
  console.log("got BTC latest block height: " + btcTipHeight);
  const targetHeight = Math.min(btcTipHeight, fromHeight + MAX_BLOCKS);

  // walk backwards to the nearest common block. find which blocks to submit
  const { hashes } = await getBlockHashesToSubmit(
    rpc,
    fromHeight,
    targetHeight
  );
  const headers = await loadBlockHeaders(rpc, hashes);
  console.log(`Loaded BTC blocks ${fromHeight}-${targetHeight}`);
  console.log("headers", headers);
  console.log("hashes", hashes);

  // resultant JSON dump
  let prevBlockHash = ["0", "0"];
  let idx = -1;
  let resPrevBlockHash = ["0", "0"];
  let blockHashes: string[][] = [];
  let blockHeaders: number[][] = [];
  // compute int version of header bytes
  for (var header of headers) {
    idx++;
    const headerBytes = Buffer.from(header, "hex");
    const headerInts = Array.from(headerBytes.values());
    console.log("headerInts", header, headerInts);

    const blockHash = hashes[idx];
    const brokenHash = [blockHash.slice(0, 32), blockHash.slice(32, 64)];
    const outputHash = brokenHash.map((x) =>
      ethers.BigNumber.from("0x" + switchEndianness(x)).toString()
    );
    console.log("outputHash", blockHash, brokenHash, outputHash);

    if (idx == 0) {
      prevBlockHash = outputHash;
      resPrevBlockHash = outputHash;
      continue;
    }
    blockHashes.push(outputHash);
    blockHeaders.push(headerInts);
    prevBlockHash = outputHash;
  }

  const fullRes = {
    prevBlockHash: resPrevBlockHash,
    blockHashes,
    blockHeaders,
  };

  // write to file
  const fs = require("fs");
  fs.writeFileSync("btc-blocks.json", JSON.stringify(fullRes));
}

/**
 * Figure out which blocks to submit. This is the most interesting logic in the
 * submitter; it walks backward to the most recent common ancestor.
 */
async function getBlockHashesToSubmit(
  rpc: BtcRpcClient,
  fromHeight: number,
  targetHeight: number
): Promise<{
  hashes: string[];
}> {
  const hashes = [] as string[];

  const promises = [] as Promise<string>[];
  for (let height = fromHeight; height <= targetHeight; height++) {
    promises.push(getBlockHash(rpc, height));
  }
  hashes.push(...(await Promise.all(promises)));

  return { hashes };
}

/**
 * Load block headers concurrently, given a list of hashes.
 */
async function loadBlockHeaders(
  rpc: BtcRpcClient,
  hashes: string[]
): Promise<string[]> {
  const promises = hashes.map((hash: string) => getBlockHeader(rpc, hash));
  return await Promise.all(promises);
}

fullFetch();
