# going_out_of_service__7ai_goal

- Address: `0x001069C8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout clears `in_service` at 0x0c and preserves the virtual `dump_actions` adjustment/function slots.

## Outcome

The released `ai_goal::going_out_of_service` implementation matched exactly.
