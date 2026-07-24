# SetPos__9PanelQuadff

- Address: `0x0014DB28`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.3871 | 67.7419 | `candidate.cpp` |
| 2 | different | 88.7097 | 87.0968 | `candidate.cpp` |
| 3 | different | 40.3226 | 29.0323 | `candidate.cpp` |
| 4 | different | 81.4516 | 61.2903 | `candidate.cpp` |
| 5 | different | 40.3226 | 29.0323 | `candidate.cpp` |

## Outcome

Deferred PanelQuad::SetPos after five source-level attempts; the released coordinate adjustment, width/height offsets, rectangle update, and field layout reproduced, but the target floating store and call-argument scheduling did not.
