# GetCenterPos__9PanelQuadRfT1

- Address: `0x0014DE08`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.9091 | 9.0909 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released PanelQuad::GetCenterPos body, x1/y1/width/height offsets, and unadjustCoords template helper. Binding the exact helper mangling and preventing its tail call matched byte-exactly on attempt 2.

## Outcome

Matched released PanelQuad center getter
