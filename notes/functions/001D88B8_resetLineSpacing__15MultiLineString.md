# resetLineSpacing__15MultiLineString

- Address: `0x001D88B8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal vtable layout preserves the line-spacing slot and released reset value of -1.

## Outcome

The released multiline spacing reset matched exactly.
