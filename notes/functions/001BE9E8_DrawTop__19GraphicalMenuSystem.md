# DrawTop__19GraphicalMenuSystem

- Address: `0x001BE9E8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body matched immediately using the existing shared FEMenu/FEMenuSystem declarations and a shared GraphicalMenuSystem context preserving the original overlay flag offset.

## Outcome

Matched the released graphical menu top draw using shared original-style menu system declarations.
