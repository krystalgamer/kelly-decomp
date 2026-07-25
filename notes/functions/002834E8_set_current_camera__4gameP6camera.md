# set_current_camera__4gameP6camera

- Address: `0x002834E8`
- Size: `0xB0` (176 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.8864 | 29.5455 | `candidate.cpp` |
| 2 | different | 35.2273 | 27.2727 | `candidate.cpp` |
| 3 | different | 68.1818 | 59.0909 | `candidate.cpp` |
| 4 | different | 75.0 | 68.1818 | `candidate.cpp` |
| 5 | different | 68.1818 | 59.0909 | `candidate.cpp` |

## Outcome

Five released camera-selection variants reproduced all logic but could not match the original constant-address and mtc1 hazard scheduling.
