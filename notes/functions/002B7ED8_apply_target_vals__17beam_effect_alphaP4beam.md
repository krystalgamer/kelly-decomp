# apply_target_vals__17beam_effect_alphaP4beam

- Address: `0x002B7ED8`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.3333 | 36.6667 | `candidate.cpp` |
| 2 | different | 48.3333 | 36.6667 | `candidate.cpp` |
| 3 | different | 48.3333 | 36.6667 | `candidate.cpp` |
| 4 | different | 16.4474 | 5.2632 | `candidate.cpp` |
| 5 | different | 48.3333 | 36.6667 | `candidate.cpp` |

## Outcome

Deferred beam_effect_alpha target-value application after five source-level attempts; the released color preservation, alpha conversion, current-value update, and setter call reproduced, but the target-only mtc1 conversion hazard nop did not.
