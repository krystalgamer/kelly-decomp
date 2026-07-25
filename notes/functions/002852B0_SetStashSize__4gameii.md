# SetStashSize__4gameii

- Address: `0x002852B0`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.875 | 2.5 | `candidate.cpp` |
| 2 | different | 11.875 | 2.5 | `candidate.cpp` |
| 3 | different | 11.875 | 2.5 | `candidate.cpp` |
| 4 | different | 8.75 | 0.0 | `candidate.cpp` |
| 5 | different | 11.875 | 2.5 | `candidate.cpp` |

## Outcome

Five released-source variants reproduced the operation, but compiler-generated FPU, switch, or empty-constructor scheduling did not match.
