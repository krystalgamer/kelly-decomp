# apply_target_vals__17beam_effect_colorP4beam

- Address: `0x002B8188`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 40.7609 | 23.913 | `candidate.cpp` |
| 3 | different | 40.7609 | 23.913 | `candidate.cpp` |
| 4 | different | 40.7609 | 23.913 | `candidate.cpp` |
| 5 | different | 40.7609 | 23.913 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released target-color body and shared source-faithful B,G,R,A color, beam, and effect layouts. As with the adjacent start-color helper, five candidates reproduced all arithmetic and stores but remained 12 bytes short because of three target-only `mtc1`/`cvt.s.w` hazard nops. Policy forbids emitting those nops manually, so shared edits were reverted.

## Outcome

Deferred beam target-color application after five source-level attempts could not reproduce three target-only FPU hazard nops.
