# SetColor__9PanelQuadffff

- Address: `0x001D9AE8`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes RGBA components at offsets `0x98`, `0x9C`, `0xA0`, and `0xA4`.

## Outcome

The released `PanelQuad::SetColor(float...)` stores matched exactly on the first attempt.
