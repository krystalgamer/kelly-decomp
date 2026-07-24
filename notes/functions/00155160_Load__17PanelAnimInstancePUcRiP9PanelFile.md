# Load__17PanelAnimInstancePUcRiP9PanelFile

- Address: `0x00155160`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 26.6667 | `candidate.cpp` |
| 2 | different | 47.5 | 23.3333 | `candidate.cpp` |
| 3 | different | 50.8333 | 33.3333 | `candidate.cpp` |
| 4 | different | 58.3333 | 46.6667 | `candidate.cpp` |
| 5 | different | 50.0 | 26.6667 | `candidate.cpp` |

## Outcome

Deferred PanelAnimInstance loading after five source-level attempts; the released base load, ReadString assignment, temporary destruction, and result reproduced, but the target hidden-return and callee-save scheduling did not.
