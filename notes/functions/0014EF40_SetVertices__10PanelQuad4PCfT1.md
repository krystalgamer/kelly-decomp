# SetVertices__10PanelQuad4PCfT1

- Address: `0x0014EF40`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 0.0 | `candidate.cpp` |
| 2 | different | 88.9706 | 73.5294 | `candidate.cpp` |
| 3 | different | 34.0278 | 11.1111 | `candidate.cpp` |
| 4 | different | 93.3824 | 91.1765 | `candidate.cpp` |
| 5 | different | 28.2895 | 0.0 | `candidate.cpp` |

## Outcome

Deferred the released four-vertex panel update after five source-level attempts; coordinate copies and all four nglSetQuadVPos calls were reconstructed, but the compiler retained a different self-versus-quad pointer register.
