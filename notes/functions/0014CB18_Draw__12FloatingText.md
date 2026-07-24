# Draw__12FloatingText

- Address: `0x0014CB18`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.4483 | 72.4138 | `candidate.cpp` |
| 2 | different | 70.6897 | 62.069 | `candidate.cpp` |
| 3 | different | 61.2069 | 48.2759 | `candidate.cpp` |
| 4 | different | 66.3793 | 55.1724 | `candidate.cpp` |
| 5 | different | 68.1034 | 51.7241 | `candidate.cpp` |

## Outcome

Deferred floating text drawing after five source-level attempts; the released non-floating position/scale update and base draw condition reproduced except for a target-only FPU compare hazard nop.
