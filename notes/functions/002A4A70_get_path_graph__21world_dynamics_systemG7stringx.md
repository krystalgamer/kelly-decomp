# get_path_graph__21world_dynamics_systemG7stringx

- Address: `0x002A4A70`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.6735 | 14.2857 | `candidate.cpp` |
| 2 | different | 34.6939 | 14.2857 | `candidate.cpp` |
| 3 | different | 35.2041 | 14.2857 | `candidate.cpp` |
| 4 | different | 80.8511 | 57.4468 | `candidate.cpp` |
| 5 | different | 83.5106 | 72.3404 | `candidate.cpp` |

### Attempt 5 notes

Fixed iterator, graph, buffer, and block-count registers recovered the target
size and 34 of 47 instructions, but not the whole-TU schedule.

## Outcome

Five source-level variants recovered path-list traversal, string block comparison, and by-value cleanup, but the original register allocation did not match.
