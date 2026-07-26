# move_to__6widgetffss

- Address: `0x0033EC58`
- Size: `0xC0` (192 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.75 | 33.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 41.6667 | 29.1667 | `candidate.cpp` |
| 4 | different | 43.75 | 33.3333 | `candidate.cpp` |
| 5 | different | 41.6667 | 27.0833 | `candidate.cpp` |

## Outcome

Five source-faithful event-construction attempts could not reproduce the target FP hazard nops, store scheduling, and non-tail call.
