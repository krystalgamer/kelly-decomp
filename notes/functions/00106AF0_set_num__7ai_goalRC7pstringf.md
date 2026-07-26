# set_num__7ai_goalRC7pstringf

- Address: `0x00106AF0`
- Size: `0xC4` (196 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.5 | 20.0 | `candidate.cpp` |
| 2 | different | 37.0 | 20.0 | `candidate.cpp` |
| 3 | different | 39.7959 | 16.3265 | `candidate.cpp` |
| 4 | different | 38.7755 | 14.2857 | `candidate.cpp` |
| 5 | different | 39.7959 | 16.3265 | `candidate.cpp` |

## Outcome

Five source-level attempts recovered the static pstring comparison, but local-static initialization and control-flow scheduling remained different.
