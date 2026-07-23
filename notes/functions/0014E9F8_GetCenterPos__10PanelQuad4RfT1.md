# GetCenterPos__10PanelQuad4RfT1

- Address: `0x0014E9F8`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released PanelQuad4 center getter, base width/height and derived x/y array offsets, plus the unadjustCoords template helper. It matched byte-exactly.

## Outcome

Matched released PanelQuad4 center getter
