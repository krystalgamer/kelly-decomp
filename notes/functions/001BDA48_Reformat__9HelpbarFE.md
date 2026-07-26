# Reformat__9HelpbarFE

- Address: `0x001BDA48`
- Size: `0xC4` (196 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 11.2903 | 0.0 | `candidate.cpp` |
| 3 | different | 12.5 | 0.0 | `candidate.cpp` |
| 4 | different | 12.9032 | 0.0 | `candidate.cpp` |
| 5 | different | 46.4286 | 30.6122 | `candidate.cpp` |

## Outcome

Five source-level attempts recovered the helpbar layout and virtual calls, but FP conversion scheduling and loop induction remained different.
