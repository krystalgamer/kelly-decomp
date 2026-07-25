# triggered__14entity_triggerP6entity

- Address: `0x0028EA88`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.1449 | 0.0 | `candidate.cpp` |
| 2 | different | 11.4035 | 0.0 | `candidate.cpp` |
| 3 | different | 37.5 | 13.8889 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 36.8056 | 11.1111 | `candidate.cpp` |

## Outcome

Five source-level vector subtraction variants could not reproduce the target position-load register allocation and duplicated vector temporary stack layout.
