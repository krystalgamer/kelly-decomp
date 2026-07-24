# Update__15CreditsFrontEndf

- Address: `0x001BB5D8`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 75.0 | `candidate.cpp` |
| 2 | different | 83.9286 | 75.0 | `candidate.cpp` |
| 3 | different | 55.0 | 50.0 | `candidate.cpp` |
| 4 | different | 84.8214 | 78.5714 | `candidate.cpp` |
| 5 | different | 81.25 | 75.0 | `candidate.cpp` |

## Outcome

Deferred credits scrolling update after five source-level attempts; the released arithmetic and branches reproduced except for a target-only FPU scheduling nop and related register scheduling.
