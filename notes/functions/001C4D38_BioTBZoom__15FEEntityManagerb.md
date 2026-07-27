# BioTBZoom__15FEEntityManagerb

- Address: `0x001C4D38`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.9841 | 71.4286 | `candidate-round1.cpp` |
| 2 | different | 76.9841 | 71.4286 | `candidate-round2.cpp` |
| 3 | different | 67.9167 | 65.0 | `candidate-round3.cpp` |
| 4 | different | 66.4062 | 60.9375 | `candidate-round4.cpp` |
| 5 | different | 67.9167 | 65.0 | `candidate-round5.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The complete audio path matches, but isolated EE GCC sibling-calls both CameraAnim branches instead of emitting the target calls with one shared epilogue.
