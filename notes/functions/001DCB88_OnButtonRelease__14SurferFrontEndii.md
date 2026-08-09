# OnButtonRelease__14SurferFrontEndii

- Address: `0x001DCB88`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.h`
- Reference source: `KS/SRC/ks/SurferFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual `OnButtonRelease` forwarding
use the shared surfer/menu hierarchy.

## Outcome

The manual menu/vtable layout was removed; the released forwarding remains
exact.
