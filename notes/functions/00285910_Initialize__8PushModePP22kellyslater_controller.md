# Initialize__8PushModePP22kellyslater_controller

- Address: `0x00285910`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.6522 | 4.3478 | `candidate.cpp` |
| 2 | different | 29.4643 | 14.2857 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released two-player initialization, PLAYER layout, controller input, and CalcViewports continuation. A single-pointer countdown loop plus non-tail barrier matched on attempt 3.

## Outcome

Matched push mode initialization
