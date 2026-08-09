# CloseAllMenus__10MenuSystem

- Address: `0x00241060`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released current-menu null guard and virtual `CloseAll` dispatch use the
shared menu-system hierarchy.

## Outcome

The manual menu/vtable layout was removed; the released helper remains exact.
