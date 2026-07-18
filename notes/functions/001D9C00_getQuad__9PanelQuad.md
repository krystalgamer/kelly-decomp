# getQuad__9PanelQuad

- Address: `0x001D9C00`
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

The released debug accessor returns `&quad`; the embedded quad begins at offset `0x1C`.

## Outcome

The released `PanelQuad::getQuad` address calculation for offset `0x1C` matched exactly on the first attempt.
