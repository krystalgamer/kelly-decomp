# raise__6signal

- Address: `0x0034C428`
- Size: `0xA8` (168 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.8409 | 38.6364 | `candidate.cpp` |
| 2 | different | 52.8409 | 38.6364 | `candidate.cpp` |
| 3 | different | 92.8571 | 80.9524 | `candidate.cpp` |
| 4 | different | 55.6818 | 43.1818 | `candidate.cpp` |
| 5 | different | 94.0476 | 85.7143 | `candidate.cpp` |

## Outcome

Five released signal-raise variants reproduced callbacks and output propagation but not iterator spill scheduling.
