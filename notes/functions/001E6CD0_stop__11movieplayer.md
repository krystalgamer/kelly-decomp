# stop__11movieplayer

- Address: `0x001E6CD0`
- Size: `0x90` (144 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 2 | different | 88.8889 | 88.8889 | `candidate.cpp` |
| 3 | different | 62.5 | 50.0 | `candidate.cpp` |
| 4 | different | 88.8889 | 88.8889 | `candidate.cpp` |
| 5 | different | 91.6667 | 88.8889 | `candidate.cpp` |

## Outcome

Five released-body variants reproduced all movie teardown operations; the best differed only in four null-store/call-delay scheduling instructions (91.67% byte score).
