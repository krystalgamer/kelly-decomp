# Draw__12FEMenuSystem

- Address: `0x001DB930`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu lookup and virtual `Draw` dispatch use the shared
menu-system hierarchy.

## Outcome

The manual menu and vtable layouts were removed.
