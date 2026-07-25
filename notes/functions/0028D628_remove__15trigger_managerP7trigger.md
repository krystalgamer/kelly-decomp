# remove__15trigger_managerP7trigger

- Address: `0x0028D628`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.3421 | 21.6216 | `candidate.cpp` |
| 2 | different | 49.3421 | 55.5556 | `candidate.cpp` |
| 3 | different | 48.6842 | 50.0 | `candidate.cpp` |
| 4 | different | 49.3421 | 21.6216 | `candidate.cpp` |
| 5 | different | 63.8158 | 21.0526 | `candidate.cpp` |

## Outcome

Five exact trigger-list removal variants reproduced the released unlink/delete behavior, but loop register allocation and target nop scheduling did not match.
