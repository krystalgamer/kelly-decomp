# SetPos__9PanelQuadffff

- Address: `0x0014DA80`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.8333 | 76.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released coordinate stores, two adjustCoords calls, width/height updates, quad layout, and NGL rectangle call. Preventing the final tail call matched on attempt 2.

## Outcome

Matched panel quad positioning
