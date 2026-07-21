# going_out_of_service__14anim_ai_action

- Address: `0x001061E8`
- Size: `0x48` (72 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_actions.cpp`
- Reference source: `KS/SRC/ai_actions.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.8889 | 55.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body and relevant ai_action, anim_ai_action, and entity declarations.

### Attempt 2 notes

Added a demonstrated post-base-call barrier because the released source context retains a normal call while isolated GCC tail-calls it.

## Outcome

The released animation action service-exit behavior matches exactly.
