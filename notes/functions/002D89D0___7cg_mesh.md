# __7cg_mesh

- Address: `0x002D89D0`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5811 | 2.7027 | `candidate.cpp` |
| 2 | different | 38.125 | 5.0 | `candidate.cpp` |
| 3 | different | 35.0 | 5.0 | `candidate.cpp` |
| 4 | different | 34.375 | 5.0 | `candidate.cpp` |
| 5 | different | 35.0 | 5.0 | `candidate.cpp` |

## Outcome

Five released-source field initialization variants reproduced collision mesh defaults, but compiler-generated member construction did not match.
