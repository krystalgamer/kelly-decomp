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

A narrow post-call barrier prevents the demonstrated tail-call optimization and matches exactly.

## Outcome

The released UV assignments and ngl update match with a narrow barrier preventing a demonstrated tail-call optimization.
