# get_num__7ai_goalRC7pstringRf

- Address: `0x00106BB8`
- Size: `0xC8` (200 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 41.1765 | 25.4902 | `candidate.cpp` |
| 3 | different | 41.1765 | 25.4902 | `candidate.cpp` |
| 4 | different | 41.1765 | 25.4902 | `candidate.cpp` |
| 5 | different | 30.5 | 8.0 | `candidate.cpp` |

## Outcome

Five source-level attempts recovered the static priority lookup, but local-static initialization and comparison scheduling remained different.
