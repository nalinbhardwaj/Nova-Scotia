export async function read_file_async(path) {
  const response = await fetch(path);
  const bytes = await response.arrayBuffer();
  const res = new Uint8Array(bytes);
  return res;
}
