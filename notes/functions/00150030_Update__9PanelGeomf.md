# Update__9PanelGeomf

- Address: `0x00150030`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released child null guard and virtual Update dispatch matched exactly with `children` at offset 0x6c, the child vtable at 0x78, and Update at virtual slot 0x4c.

## Outcome

The released panel-geometry update propagation matched exactly on the first attempt.
