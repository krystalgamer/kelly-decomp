# nvlMem2Cpy__FPUciT0iT0iT0i

- Address: `0x003874D8`
- Size: `0x134` (308 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.7975 | 3.7975 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source extraction

- Tested the exact released `nvlMem2Cpy` definition once with only the minimal `memcpy` declaration.
- The candidate compiled and emitted the requested symbol but differed: 91/316 compared bytes (28.7975%) and 3/79 instructions (3.7975%); candidate size 316 versus target size 308.
- Per FIRST PASS wave 26 lane B1 constraints, no variants, diff chasing, build, integration, finalization, queue edits, or source/prefix/shared proposal were attempted.

## Citations

- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:356-383`
- `tmp/functions/003874D8_nvlMem2Cpy__FPUciT0iT0iT0i/attempt-1/result.json`

## Outcome

The exact released NVL memory-copy helper differed from the target; the sole attempt scored 28.7975%.
