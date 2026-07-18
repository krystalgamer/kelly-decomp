# SetFade__9PanelQuadiff

- Address: `0x001D9BE0`
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

The released method writes `fade`, `fade_alpha`, and `fade_timer` at offsets `0x4`, `0x8`, and `0xC`.

## Outcome

The released `PanelQuad::SetFade(int,float,float)` assignments matched exactly on the first attempt.
