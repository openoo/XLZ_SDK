const fs = require("fs");
const path = require("path");

const root = path.resolve(__dirname, "..");
const analysisPath = process.argv[2] || path.resolve(root, "..", "sdk-analysis", "xlz_sdk_5_1_7_analysis.json");
const metadataPath = path.resolve(root, "src", "metadata.cpp");

function fail(message) {
  console.error(`[FAIL] ${message}`);
  process.exitCode = 1;
}

const analysis = JSON.parse(fs.readFileSync(analysisPath, "utf8"));
const metadata = fs.readFileSync(metadataPath, "utf8");

const metadataNames = [...metadata.matchAll(/^\s*\{\d+,\s*"([^"]+)"/gm)].map((match) => match[1]);
const duplicateNames = [...new Set(metadataNames.filter((name, index, all) => all.indexOf(name) !== index))];
const missing = analysis.apis.map((api) => api.name).filter((name) => !metadataNames.includes(name));
const extra = metadataNames.filter((name) => !analysis.apis.some((api) => api.name === name));

const params = [...metadata.matchAll(/\{"([^"]+)",\s*"([^"]+)",\s*(true|false),\s*(true|false),\s*(true|false),\s*"([^"]*)"\}/g)];
const badByRef = params.filter((match) => {
  const byRef = match[3] === "true";
  const nativeArg = match[6];
  return byRef && !nativeArg.includes("取变量地址") && !nativeArg.includes("取变量数据地址");
});

if (metadataNames.length !== analysis.apis.length) fail(`API count mismatch: metadata=${metadataNames.length}, analysis=${analysis.apis.length}`);
if (duplicateNames.length > 0) fail(`Duplicate API names: ${duplicateNames.join(", ")}`);
if (missing.length > 0) fail(`Missing API names: ${missing.join(", ")}`);
if (extra.length > 0) fail(`Extra API names: ${extra.join(", ")}`);
if (badByRef.length > 0) fail(`By-ref params without native address marker: ${badByRef.map((m) => m[1]).join(", ")}`);

const summary = {
  apiCount: metadataNames.length,
  paramCount: params.length,
  byRef: params.filter((m) => m[3] === "true").length,
  optional: params.filter((m) => m[4] === "true").length,
  arrays: params.filter((m) => m[5] === "true").length,
  structs: analysis.structs.length,
};

console.log(JSON.stringify(summary, null, 2));
if (process.exitCode) process.exit(process.exitCode);
