# going_into_service__9ai_action

- Address: `0x00105E58`
- Size: `0x10` (16 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_actions.cpp`
- Reference source: `KS/SRC/ai_actions.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released method sets the `IN_SERVICE` bit in `flags` at offset `0x4`.

## Outcome

The released `ai_action::going_into_service` flag update matched exactly on the first attempt.
