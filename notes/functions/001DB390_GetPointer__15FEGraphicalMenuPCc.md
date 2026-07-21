# GetPointer__15FEGraphicalMenuPCc

- Address: `0x001DB390`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.9412 | 17.6471 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The direct released condition selected the virtual parent path as fallthrough and emitted a larger branch layout.

### Attempt 2 notes

The logically equivalent null-parent guard preserves the released behavior and reproduces the target branch-likely layout exactly.

## Outcome

The released parent delegation and local panel lookup match exactly with the equivalent null-parent guard.
