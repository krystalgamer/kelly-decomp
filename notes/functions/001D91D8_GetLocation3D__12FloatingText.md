# GetLocation3D__12FloatingText

- Address: `0x001D91D8`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 12.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Returning a POD member used a 64-bit aggregate copy; the released inline accessor constructs a scalar vector from the three float components.

### Attempt 2 notes

A minimal layout places the three-component location at offset 0xb0 and preserves the by-value copy.

## Outcome

The inline `FloatingText::GetLocation3D` accessor matched exactly.
