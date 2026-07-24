# SetClip__9PanelQuadRC5recti

- Address: `0x0014DE60`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.0 | 20.0 | `candidate.cpp` |
| 2 | different | 96.0 | 96.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact recti/point layout, PanelQuad clip offsets, assignment self-check, and integer adjustCoords template. Using the clipping base for the second field store matched on attempt 3.

## Outcome

Matched panel quad clipping bounds
