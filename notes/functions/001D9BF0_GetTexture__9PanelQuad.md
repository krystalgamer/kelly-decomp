# GetTexture__9PanelQuad

- Address: `0x001D9BF0`
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

The released getter returns `quad.Tex`, whose pointer is at absolute PanelQuad offset `0x7C`.

## Outcome

The released `PanelQuad::GetTexture` pointer load at offset `0x7C` matched exactly on the first attempt.
