# Rotate__9PanelQuadf

- Address: `0x001D9AC8`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method assigns rotate mode `1` at `0x84` and `rotation` at `0x88`.

## Outcome

The released `PanelQuad::Rotate(float)` assignments matched exactly on the first attempt.
