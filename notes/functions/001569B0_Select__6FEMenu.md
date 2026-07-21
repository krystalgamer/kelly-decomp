# Select__6FEMenu

- Address: `0x001569B0`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released menu-system virtual Select dispatch matched exactly with menu_num at 0x14, highlighted/system at 0x4c/0x50, and Select at virtual slot 0x44.

## Outcome

The released FE menu selection handler matched exactly on the first attempt.
