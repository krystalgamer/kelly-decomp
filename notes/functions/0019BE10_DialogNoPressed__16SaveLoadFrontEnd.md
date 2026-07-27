# DialogNoPressed__16SaveLoadFrontEnd

- Address: `0x0019BE10`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.25 | 0.0 | `candidate.cpp` |
| 2 | different | 43.0 | 36.0 | `candidate.cpp` |
| 3 | different | 43.3333 | 36.0 | `candidate.cpp` |
| 4 | different | 32.0707 | 27.2727 | `candidate.cpp` |
| 5 | different | 54.5833 | 45.0 | `candidate.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The target belongs to a broader save/load source revision with an EndError call and additional dialog-state transitions absent from the released body.
