# apply_start_vals__17beam_effect_colorP4beam

- Address: `0x002B80D0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.7609 | 23.913 | `candidate.cpp` |
| 2 | different | 40.7609 | 23.913 | `candidate.cpp` |
| 3 | different | 40.7609 | 23.913 | `candidate.cpp` |
| 4 | different | 31.5217 | 10.8696 | `candidate.cpp` |
| 5 | different | 40.7609 | 23.913 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released beam-effect body and source-faithful B,G,R,A color layout, beam color offset, effect fields, and setter. All five candidates reproduced the arithmetic and stores but remained 12 bytes short because the target contains three compiler-inserted `mtc1`-to-`cvt.s.w` hazard nops. Instruction-emitting asm is forbidden, so the shared experiment was reverted.

## Outcome

Deferred beam start-color application after five source-level attempts could not reproduce three target-only FPU hazard nops.
