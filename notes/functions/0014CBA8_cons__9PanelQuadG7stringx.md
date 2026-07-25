# cons__9PanelQuadG7stringx

- Address: `0x0014CBA8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.5 | 67.5 | `candidate.cpp` |
| 2 | different | 85.625 | 82.5 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Lowered the released by-value PanelQuad initialization to exact string assignment, field stores, quad initialization, and non-tail parameter destruction.

## Outcome

Matched panel quad initialization
