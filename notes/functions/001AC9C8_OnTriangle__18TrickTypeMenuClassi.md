# OnTriangle__18TrickTypeMenuClassi

- Address: `0x001AC9C8`
- Size: `0x9C` (156 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 45.2381 | 38.0952 | `candidate.cpp` |
| 3 | different | 90.3846 | 89.7436 | `candidate.cpp` |
| 4 | different | 94.8718 | 94.8718 | `candidate.cpp` |
| 5 | different | 94.8718 | 94.8718 | `candidate.cpp` |

## Outcome

Five released-source and exact-layout variants reproduced the full trick-menu back action at exact size; the best matched 37 of 39 instructions, but event-store and pause-call scheduling remained swapped.
