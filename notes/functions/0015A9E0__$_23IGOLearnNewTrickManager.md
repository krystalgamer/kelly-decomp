# _$_23IGOLearnNewTrickManager

- Address: `0x0015A9E0`
- Size: `0xA8` (168 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.4048 | 35.7143 | `candidate.cpp` |
| 2 | different | 47.619 | 33.3333 | `candidate.cpp` |
| 3 | different | 57.1429 | 45.2381 | `candidate.cpp` |
| 4 | different | 57.1429 | 45.2381 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five released destructor variants reproduced resource cleanup but not generated vector-delete scheduling.
