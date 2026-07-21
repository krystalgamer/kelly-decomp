# Load__15FEGraphicalMenub

- Address: `0x001DB098`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.6667 | 6.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released inline override loads the panel only when no parent menu is present. Staging the FrontEnd subobject, vtable adjustment, and virtual function pointer as source-level locals reproduces the old multiple-inheritance virtual call exactly.

## Outcome

The graphical-menu floating load override matches with its source-level parent guard and FrontEnd virtual call.
