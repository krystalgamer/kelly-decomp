# Update__13PanelAnimFilefRC9matrix4x4

- Address: `0x001553F8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.5652 | 56.5217 | `candidate.cpp` |
| 2 | different | 69.5652 | 56.5217 | `candidate.cpp` |
| 3 | different | 68.4783 | 52.1739 | `candidate.cpp` |
| 4 | different | 68.4783 | 52.1739 | `candidate.cpp` |
| 5 | different | 68.4783 | 52.1739 | `candidate.cpp` |

## Outcome

Released PanelAnim linked-list update matched all functional instructions but consistently lacked the target post-load scheduling nop after five distinct source-level loop/layout candidates.
