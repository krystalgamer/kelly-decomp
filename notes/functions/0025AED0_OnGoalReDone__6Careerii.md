# OnGoalReDone__6Careerii

- Address: `0x0025AED0`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method indexes the word-sized `goal_passed` array at offset `0x80` using the goal argument.

## Outcome

The released `Career::OnGoalReDone` indexed flag set matched exactly on the first attempt.
