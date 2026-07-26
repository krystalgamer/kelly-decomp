# BOARD_CompletelyUnloadIFLFiles__Fv

- Address: `0x0025F970`
- Size: `0xD0` (208 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/BoardManager.cpp`
- Reference source: `KS/SRC/ks/BoardManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.6731 | 10.2041 | `candidate.cpp` |
| 2 | different | 20.6731 | 10.2041 | `candidate.cpp` |
| 3 | different | 20.6731 | 10.2041 | `candidate.cpp` |
| 4 | different | 20.6731 | 10.2041 | `candidate.cpp` |
| 5 | different | 20.6731 | 10.2041 | `candidate.cpp` |

## Outcome

The released unload loop was recovered, but fixed-string construction and nested texture-loop scheduling remained irreducible after five source-level attempts.
