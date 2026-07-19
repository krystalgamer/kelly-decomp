# GetLocation3D__10FloatingPQ

- Address: `0x001D9DF8`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.125 | 12.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an aggregate-copy, constant-folding, store-order, or call-delay scheduling mismatch.

### Attempt 2 notes

A minimal layout places the three-component location at offset 0x1a0 and preserves the by-value copy.

## Outcome

The inline `FloatingPQ::GetLocation3D` accessor matched exactly.
