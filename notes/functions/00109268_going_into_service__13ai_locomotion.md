# going_into_service__13ai_locomotion

- Address: `0x00109268`
- Size: `0x10` (16 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets `in_service` at `0xCC` then clears `wait_for_facing` at `0xC8`; scheduling places the service store in the delay slot.

## Outcome

The released `ai_locomotion::going_into_service` state changes matched exactly on the first attempt.
