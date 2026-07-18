# going_into_service__7ai_goal

- Address: `0x00106618`
- Size: `0xC` (12 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions compiled out, the released method sets the word-sized `in_service` flag at offset `0xC`.

## Outcome

The released `ai_goal::going_into_service` flag set matched exactly on the first attempt.
