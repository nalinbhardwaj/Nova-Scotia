import fetch from "node-fetch";

interface JsonRpcOpts {
  url: string;
  headers: { [key: string]: string };
}

interface JsonRpcReq {
  jsonrpc: "2.0";
  id: number;
  method: string;
  params: any[] | Record<string, any>;
}

interface JsonRpcRes {
  jsonrpc: "2.0";
  id: number | string;
  result?: any;
  error?: { code: number; message: string; data?: any };
}

export class JsonRpcClient {
  nextID = 1;
  options: JsonRpcOpts;
  constructor(options: JsonRpcOpts) {
    this.options = options;
  }

  async req(
    method: string,
    params: any[] | Record<string, any>
  ): Promise<JsonRpcRes> {
    const { url, headers } = this.options;
    const req: JsonRpcReq = {
      id: this.nextID++,
      jsonrpc: "2.0",
      method,
      params,
    };

    const res = await fetch(url, {
      method: "POST",
      headers: { ...headers, "Content-Type": "application/json" },
      body: JSON.stringify(req),
    });

    let ret = null as JsonRpcRes | null;
    try {
      ret = (await res.json()) as JsonRpcRes;
      if (ret.id !== req.id) throw new Error("id mismatch");
      return ret;
    } catch (e) {
      throw new Error(
        `JSONRPC method ${method} error ${e}, ` +
          `${url} sent ${res.status} ${res.statusText}, ` +
          `request ${JSON.stringify(req)}, response ${JSON.stringify(ret)}`
      );
    }
  }
}

export interface BitcoinJsonRpc {
  getblockcount: [];
  getblockhash: [number];
  getblockheader: [string, boolean];
  getblock: [string, number];
  getrawtransaction: [string, boolean, string];
  decoderawtransaction: [string, string];
}

export interface BlockJson {
  hash: string;
  height: number;
  merkleroot: string;
  nTx: number;
  tx: string[];
}

export type BtcRpcClient = JsonRpcClient;

/**
 * Creates a Bitcoin client pointing to getblock.io
 */
export function createGetblockClient(
  apiKey: string,
  network: "testnet" | "mainnet"
) {
  if (!apiKey) throw new Error("Missing GetBlock API key");
  return new JsonRpcClient({
    url: `https://btc.getblock.io/${network}/`,
    headers: { "x-api-key": apiKey },
  });
}

export async function getBlockHash(
  rpc: BtcRpcClient,
  height: number
): Promise<string> {
  let res = await rpc.req("getblockhash", [height]);
  if (res.error) throw new Error("bad getblockhash: " + JSON.stringify(res));
  const blockHash = res.result as string;
  return blockHash;
}

export async function getBlockCount(rpc: BtcRpcClient) {
  const res = await rpc.req("getblockcount", []);
  if (res.error) throw new Error("bad getblockcount: " + JSON.stringify(res));
  return res.result as number;
}

export async function getBlockHeader(rpc: BtcRpcClient, blockHash: string) {
  const res = await rpc.req("getblockheader", [blockHash, false]);
  if (res.error) throw new Error("bad getblockheader: " + JSON.stringify(res));
  const headerHex = res.result as string;
  return headerHex;
}

export async function getBlock(
  rpc: BtcRpcClient,
  blockHash: string
): Promise<BlockJson> {
  const res = await rpc.req("getblock", [blockHash, 1]);
  if (res.error) throw new Error("bad getblock: " + JSON.stringify(res));
  return res.result as BlockJson;
}

export async function getRawTransaction(
  rpc: BtcRpcClient,
  txId: string,
  blockHash: string
): Promise<string> {
  const res = await rpc.req("getrawtransaction", [txId, false, blockHash]);
  if (res.error) throw new Error("bad getrawtx: " + JSON.stringify(res));
  const ret = res.result as string;
  return ret;
}
