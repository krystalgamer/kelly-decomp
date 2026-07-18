# SetAlpha__9PanelQuadf

- Address: `0x001D9BB8`
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

The target inline setter assigns the alpha component `a` at offset `0xA4`, matching the released PanelQuad field order.

## Outcome

The reconstructed `PanelQuad::SetAlpha` assignment to `a` at offset `0xA4` matched exactly on the first attempt.
