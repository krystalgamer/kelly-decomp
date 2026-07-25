# register_signals__7trigger

- Address: `0x0028EB30`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 5.5556 | `candidate.cpp` |
| 2 | different | 76.3889 | 72.2222 | `candidate.cpp` |
| 3 | different | 74.3056 | 72.2222 | `candidate.cpp` |
| 4 | different | 76.3889 | 72.2222 | `candidate.cpp` |
| 5 | different | 66.6667 | 63.8889 | `candidate.cpp` |

## Outcome

Five signal-registration candidates reproduced both trigger signals but could not match the target first-construction prologue/global-base schedule; the best reached 76.39% byte score.
