# LoadAll__19GraphicalMenuSystem

- Address: `0x001BE630`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shipped loading body matched on the first attempt after extending the shared GraphicalMenuSystem and FEEntityManager declarations with the released loading fields and methods. The built menu enum retains one source-version entry before Title, represented once in the shared class.

## Outcome

Matched the released graphical-menu bulk loading path with shared manager and menu-system declarations.
