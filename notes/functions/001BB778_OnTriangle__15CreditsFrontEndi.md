# OnTriangle__15CreditsFrontEndi

- Address: `0x001BB778`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released handler activates `GraphicalMenuSystem::ExtrasMenu` through the
shared credits and menu-system hierarchy.

## Outcome

The manual menu-system vtable and object layouts were removed.
