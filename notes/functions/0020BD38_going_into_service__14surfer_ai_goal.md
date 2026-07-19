# going_into_service__14surfer_ai_goal

- Address: `0x0020BD38`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_ai_goals.cpp`
- Reference source: `KS/SRC/ks/kellyslater_ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released lifecycle hook forwards to the base goal implementation; a barrier prevents a sibling call.

## Outcome

The released `surfer_ai_goal::going_into_service` wrapper matched exactly on the first attempt.
