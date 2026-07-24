# SetCenterPos__9PanelQuadff

- Address: `0x0014DC90`
- Size: `0x8C` (140 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.7143 | 88.5714 | `candidate.cpp` |
| 2 | different | 90.7143 | 88.5714 | `candidate.cpp` |
| 3 | different | 85.0 | 82.8571 | `candidate.cpp` |
| 4 | different | 90.7143 | 88.5714 | `candidate.cpp` |
| 5 | different | 26.3889 | 11.1111 | `candidate.cpp` |

## Outcome

Five source-level candidates preserved the released coordinate math but could not reproduce the adjustCoords call-delay schedule; the best matched 31/35 instructions (90.71% bytes), with four prologue/call setup differences.
