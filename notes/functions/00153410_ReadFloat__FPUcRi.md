# ReadFloat__FPUcRi

- Address: `0x00153410`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.625 | 18.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The combined expression was reassociated and changed byte-load ordering.

### Attempt 2 notes

Preserving the released left-to-right byte accumulation matches exactly.

## Outcome

The released little-endian float decode matches exactly when preserving left-to-right byte accumulation.
