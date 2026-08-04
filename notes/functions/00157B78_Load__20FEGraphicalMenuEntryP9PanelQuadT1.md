# Load__20FEGraphicalMenuEntryP9PanelQuadT1

- Address: `0x00157B78`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical `FEGraphicalMenuEntry` and `PanelQuad` declarations preserve both panel pointers and the inlined `AddedToMenu` flag stores.

## Outcome

The two-quad `FEGraphicalMenuEntry::Load` overload matched exactly.
