# RotateOnce__10PanelQuad4fff

- Address: `0x0014E7B0`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.8378 | 18.9189 | `candidate.cpp` |
| 2 | different | 80.1471 | 76.4706 | `candidate.cpp` |
| 3 | different | 80.1471 | 76.4706 | `candidate.cpp` |
| 4 | different | 80.1471 | 76.4706 | `candidate.cpp` |
| 5 | different | 77.9412 | 70.5882 | `candidate.cpp` |

## Outcome

Deferred the released one-shot panel-quad rotation after five source-level attempts; coordinate adjustment, quad rotation, and all four transformed vertex copies were reconstructed, but pre-call scheduling remained different.
