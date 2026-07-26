# SetCenterPos__10PanelQuad4ff

- Address: `0x0014E930`
- Size: `0xC4` (196 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.4286 | 7.1429 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 21.4286 | 7.1429 | `candidate.cpp` |
| 4 | different | 42.4528 | 37.7358 | `candidate.cpp` |
| 5 | different | 26.8519 | 11.1111 | `candidate.cpp` |

## Outcome

Five attempts recovered the panel geometry and coordinate updates, but pointer induction and FP register scheduling remained different.
