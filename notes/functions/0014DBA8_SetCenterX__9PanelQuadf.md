# SetCenterX__9PanelQuadf

- Address: `0x0014DBA8`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 2 | different | 16.1765 | 8.8235 | `candidate.cpp` |
| 3 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 4 | different | 20.6897 | 3.4483 | `candidate.cpp` |
| 5 | different | 20.6897 | 3.4483 | `candidate.cpp` |

## Outcome

Deferred PanelQuad center-X positioning after five source-level attempts; the released coordinate adjustment and quad update reproduced, but the target local-store and return-address scheduling did not.
