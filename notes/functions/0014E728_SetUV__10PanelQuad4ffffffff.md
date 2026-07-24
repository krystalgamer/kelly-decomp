# SetUV__10PanelQuad4ffffffff

- Address: `0x0014E728`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.5714 | 8.5714 | `candidate.cpp` |
| 2 | different | 24.3056 | 2.7778 | `candidate.cpp` |
| 3 | different | 59.8485 | 51.5152 | `candidate.cpp` |
| 4 | different | 24.3056 | 2.7778 | `candidate.cpp` |
| 5 | different | 28.5714 | 8.5714 | `candidate.cpp` |

## Outcome

Deferred the released panel-quad UV setter after five source-level attempts; exact value stores were reconstructed, but target loop register pressure, branch-likely scheduling, and an FPU load hazard nop could not be reproduced.
