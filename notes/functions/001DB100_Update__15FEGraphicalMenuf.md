# Update__15FEGraphicalMenuf

- Address: `0x001DB100`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared multiple-inheritance layout and a local final menu-update pointer
preserve both base calls.

## Outcome

The local base layouts and compiler barrier were removed.
