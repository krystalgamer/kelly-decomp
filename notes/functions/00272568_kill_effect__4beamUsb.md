# kill_effect__4beamUsb

- Address: `0x00272568`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.5714 | 9.5238 | `candidate.cpp` |
| 2 | different | 48.125 | 51.2821 | `candidate.cpp` |
| 3 | different | 46.25 | 92.1053 | `candidate.cpp` |
| 4 | different | 46.25 | 92.1053 | `candidate.cpp` |
| 5 | different | 46.25 | 92.1053 | `candidate.cpp` |

## Outcome

Five released-source variants reproduced effect lookup and killing; the best matched 35 instructions but the target retained two loop hazard nops.
