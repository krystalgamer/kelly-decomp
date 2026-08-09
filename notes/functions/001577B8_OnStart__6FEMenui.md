# OnStart__6FEMenui

- Address: `0x001577B8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-submenu null guard and virtual `OnStart` dispatch use the
shared menu hierarchy.

## Outcome

The manual menu/vtable layout was removed; the released forwarding remains
exact.
