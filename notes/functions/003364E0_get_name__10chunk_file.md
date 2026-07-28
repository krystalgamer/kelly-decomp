# get_name__10chunk_file

- Address: `0x003364E0`
- Size: `0x15C` (348 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/declaration context

- FIRST PASS wave 46 lane B2 for `0x003364E0 get_name__10chunk_file`.
- Tested the exact released `chunk_file::get_name()` body once with the released `chunk_file.h` declaration context.
- Result: **compile_failed**, score **0.0%**. The isolated candidate's relative include path did not resolve under the EE compiler invocation, so no object or target symbol was emitted.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/chunkfile.cpp:312-332`
- `kelly-slaters-pro-surfer/KS/SRC/chunkfile.h:20-72`
- `tmp/functions/003364E0_get_name__10chunk_file/attempt-1/result.json`
- `tmp/functions/003364E0_get_name__10chunk_file/attempt-1/compiler.stderr`

## Outcome

The exact released chunk-file name getter failed the isolated compile because its released include path was unavailable; the sole attempt scored 0%.
