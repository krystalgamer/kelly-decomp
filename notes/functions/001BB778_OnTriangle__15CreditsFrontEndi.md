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

The released handler activates `GraphicalMenuSystem::ExtrasMenu`. The ELF symbol records the built `FEMenuSystem::MakeActive(int, int, bool)` signature, and the recovered old-GCC vtable layout reproduces the virtual call and default arguments exactly.

## Outcome

The credits-screen triangle handler matches with the source-level Extras-menu virtual call.
