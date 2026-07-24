# includes__C4hullRC6sphere

- Address: `0x00344958`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/hull.cpp`
- Reference source: `KS/SRC/hull.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.5 | 50.0 | `candidate.cpp` |
| 2 | different | 72.5 | 50.0 | `candidate.cpp` |
| 3 | different | 31.25 | 6.25 | `candidate.cpp` |
| 4 | different | 34.1667 | 6.6667 | `candidate.cpp` |
| 5 | different | 72.5 | 50.0 | `candidate.cpp` |

## Outcome

Deferred hull::includes after five source-level attempts; the released plane iteration and sphere distance comparison reproduced, but the target FPU load schedule and iterator register assignment did not.
