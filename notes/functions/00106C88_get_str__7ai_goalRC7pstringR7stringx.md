# get_str__7ai_goalRC7pstringR7stringx

- Address: `0x00106C88`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base string getter is the matching false-returning fallback for
`ai_goal`. Its first candidate matched both instructions.

## Outcome

The released ai_goal string getter is the companion false-returning fallback. It matched on the first candidate and preserved the exact ROM checksum after integration.
