# compare__7ai_goalPCvT1

- Address: `0x00112FD8`
- Size: `0x58` (88 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.h`
- Reference source: `KS/SRC/ai_goals.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 68.1818 | `candidate.cpp` |
| 2 | different | 70.4545 | 36.3636 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released ai_goal compare body and priority/priority_modifier offsets. Constraining the shared result register at the two nonzero exits reproduced the target return-block layout and matched byte-exactly on attempt 3.

## Outcome

Matched released ai_goal comparison
