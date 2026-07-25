# LoadingStateUpdate__4game

- Address: `0x00284EF0`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.3889 | 36.1111 | `candidate.cpp` |
| 2 | different | 51.3889 | 36.1111 | `candidate.cpp` |
| 3 | different | 64.2045 | 59.0909 | `candidate.cpp` |
| 4 | different | 95.1389 | 88.8889 | `candidate.cpp` |
| 5 | different | 17.9487 | 0.0 | `candidate.cpp` |

## Outcome

Five source candidates reproduced the loading-state logic; the best matched 32/36 instructions, but the local switch jump-table address cannot match the target ROM table in ordinary source.
