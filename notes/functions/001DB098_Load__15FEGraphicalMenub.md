# Load__15FEGraphicalMenub

- Address: `0x001DB098`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.6667 | 6.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | different | 82.1429 | 64.2857 | `001DB098.cpp` |

### Attempt 2 notes

The released inline override loads the panel only when no parent menu is present. Staging the FrontEnd subobject, vtable adjustment, and virtual function pointer as source-level locals reproduces the old multiple-inheritance virtual call exactly.

### Attempt 3 notes

The clean shared-hierarchy call preserves the behavior and size, but EE GCC
computes the `FrontEnd` subobject before loading its vtable instead of using
the target instruction schedule.

## Outcome

The manual vtable staging was removed and the inline override was deferred.
