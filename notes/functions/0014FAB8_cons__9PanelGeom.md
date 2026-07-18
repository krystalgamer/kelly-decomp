# cons__9PanelGeom

- Address: `0x0014FAB8`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released body uses three explicit assignments to clear `children`, `next`, and `parent` at offsets `0x6C`, `0x70`, and `0x74`. Restoring that source shape matched on attempt two.

## Outcome

The released `PanelGeom::cons` pointer clears matched on attempt two with the original explicit assignments.
