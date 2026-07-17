# set_str__7ai_goalRC7pstringRC7stringx

- Address: `0x00106C80`
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

The base string setter is a fallback that always returns `false`. The
minimal C++ definition matched on the first attempt.

## Outcome

The released ai_goal string setter is a false-returning fallback. The first candidate matched exactly and the integrated ROM checksum stayed identical.
