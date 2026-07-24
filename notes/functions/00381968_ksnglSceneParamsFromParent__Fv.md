# ksnglSceneParamsFromParent__Fv

- Address: `0x00381968`
- Size: `0x8C` (140 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.5714 | 77.1429 | `candidate.cpp` |
| 2 | different | 98.5714 | 94.2857 | `candidate.cpp` |
| 3 | different | 88.5714 | 88.5714 | `candidate.cpp` |
| 4 | different | 98.5714 | 94.2857 | `candidate.cpp` |
| 5 | different | 88.5714 | 88.5714 | `candidate.cpp` |

## Outcome

Five released-body candidates reproduced every scene parameter call, but the best differed only in the two default integer argument setup instructions for the perspective call (98.57% byte score).
