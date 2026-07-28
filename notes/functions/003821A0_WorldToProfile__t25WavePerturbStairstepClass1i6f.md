# WorldToProfile__t25WavePerturbStairstepClass1i6f

- Address: `0x003821A0`
- Size: `0x1C8` (456 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

First-pass exact released body candidate. Minimal class layout preserves pulsex at 0x1C0 and spline coefficient arrays at 0x1F0/0x208/0x220/0x238; the inline spline evaluator reproduces the target binary search and Horner evaluation without project headers.

Test result: compile_failed. Legacy EE GCC could not deduce the array-bound template for SPLINE_Evaluate from the five array arguments. Per first-pass constraints, no retry or alternative candidate was attempted.

## Outcome

The exact released wave stair-step profile candidate failed to compile with its minimal released declarations; no alternate source was attempted.
