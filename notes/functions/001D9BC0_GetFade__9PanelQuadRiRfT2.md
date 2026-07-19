# GetFade__9PanelQuadRiRfT2

- Address: `0x001D9BC0`
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

The minimal layout preserves the released fade fields at offsets 4, 8, and 12 and retains the original comma-expression spelling.

## Outcome

The released inline `PanelQuad::GetFade` accessor matched exactly on the first attempt.
