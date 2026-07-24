# SetBehaviorNF__10FloatingPQff

- Address: `0x0014F680`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.3226 | 87.0968 | `candidate.cpp` |
| 2 | different | 16.4062 | 3.125 | `candidate.cpp` |
| 3 | different | 88.7097 | 83.871 | `candidate.cpp` |
| 4 | different | 83.0645 | 58.0645 | `candidate.cpp` |
| 5 | different | 90.3226 | 87.0968 | `candidate.cpp` |

## Outcome

Deferred FloatingPQ::SetBehaviorNF after five source-level attempts; the released half-size calculations, constant bounds, PanelQuad call, and behavior flag reproduced at 90%, but the target prologue save and argument-copy scheduling did not.
