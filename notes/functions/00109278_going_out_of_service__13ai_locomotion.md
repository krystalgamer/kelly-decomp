# going_out_of_service__13ai_locomotion

- Address: `0x00109278`
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

The released method clears `repulsion_wait_timer` at `0x13C`, `repulsion_wait` at `0x140`, and `in_service` at `0xCC`.

## Outcome

The released `ai_locomotion::going_out_of_service` state clears matched exactly on the first attempt.
