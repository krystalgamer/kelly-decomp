# SetFade__9PanelQuadf

- Address: `0x0014D068`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method assigns `fade = 2` at `0x4` and `fade_alpha` at `0x8`.

## Outcome

The released `PanelQuad::SetFade(float)` assignments matched exactly on the first attempt.
