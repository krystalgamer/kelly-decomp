# BlockPSMT4toPSMCT32__FPUcT0

- Address: `0x0039F960`
- Size: `0x10C` (268 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source extraction

- Submitted one non-placeholder candidate derived from the released `BlockPSMT4toPSMCT32` source with the required `u_char` declaration.
- Ran `function_test` exactly once. Result: `compile_failed`, score 0.0.
- The candidate extraction omitted the released function's final closing brace, producing the cited end-of-input parse error. Per the lane constraints, no retry, variant, or diff chasing was performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is made.

## Citations

- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:5134-5220`
- `tmp/functions/0039F960_BlockPSMT4toPSMCT32__FPUcT0/attempt-1/compiler.stderr:1-3`
- `tmp/functions/0039F960_BlockPSMT4toPSMCT32__FPUcT0/attempt-1/result.json`

## Outcome

The sole extracted texture-block conversion candidate failed compilation because its released body was missing a closing brace; no retry was made.
