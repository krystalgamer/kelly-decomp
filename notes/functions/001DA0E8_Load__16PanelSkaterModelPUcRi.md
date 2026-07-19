# Load__16PanelSkaterModelPUcRi

- Address: `0x001DA0E8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline override delegates to `PanelGeom::Load`; retaining the result across a barrier prevents a sibling call.

## Outcome

The released `PanelSkaterModel::Load` forwarding wrapper matched exactly on the first attempt.
