# register_signals__4beam

- Address: `0x00272678`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.0556 | 5.5556 | `candidate.cpp` |
| 2 | different | 25.0 | 13.5135 | `candidate.cpp` |
| 3 | different | 76.3889 | 72.2222 | `candidate.cpp` |
| 4 | different | 70.1389 | 63.8889 | `candidate.cpp` |
| 5 | different | 74.3056 | 72.2222 | `candidate.cpp` |

## Outcome

Five source-level signal registration candidates reproduced both signal insertions but could not match the target first-construction prologue/global-base schedule; the best reached 76.39% byte score.
