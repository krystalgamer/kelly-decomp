# Draw__13PhotoSaveMenu

- Address: `0x001CFB30`
- Size: `0xCC` (204 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 97.549 | 94.1176 | `candidate.cpp` |
| 3 | different | 98.0392 | 96.0784 | `candidate.cpp` |
| 4 | different | 95.098 | 94.1176 | `candidate.cpp` |
| 5 | different | 95.098 | 94.1176 | `candidate.cpp` |

## Outcome

The released draw sequence and object layouts reached 98.04%, but the two callee-save stores remained reversed after five source-level attempts.
