# SetUV__9PanelQuadffff

- Address: `0x001D9B50`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released assignments and ngl call matched but the isolated compiler converted the final call into a tail call.

### Attempt 2 notes

The shared panel layout and a local `nglSetQuadUV` pointer preserve the framed
NGL update.

## Outcome

The compiler barrier was removed.
