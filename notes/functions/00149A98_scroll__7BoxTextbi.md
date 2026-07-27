# scroll__7BoxTextbi

- Address: `0x00149A98`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.5323 | 54.8387 | `candidate-round1.cpp` |
| 2 | different | 15.0 | 3.3333 | `candidate-round2.cpp` |
| 3 | different | 38.3065 | 30.6452 | `candidate-round3.cpp` |
| 4 | different | 11.6667 | 0.0 | `candidate-round4.cpp` |
| 5 | different | 29.5833 | 15.0 | `candidate-round5.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The exact box-text scrolling behavior is recovered, but isolated EE GCC reuses the height-difference pointer and emits loop preheaders instead of the target reload-and-direct-entry layout.
