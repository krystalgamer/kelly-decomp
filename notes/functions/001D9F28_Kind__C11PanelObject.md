# Kind__C11PanelObject

- Address: `0x001D9F28`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline discriminator returns `PanelGeomObject` (`0x91`).

## Outcome

The released `PanelObject::Kind` constant return matched exactly on the first attempt.
