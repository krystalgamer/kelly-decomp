# OnActivate__14TrickMenuClass

- Address: `0x001ACB30`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.2075 | 49.0566 | `candidate.cpp` |
| 2 | different | 47.3958 | 29.1667 | `candidate.cpp` |
| 3 | different | 95.7447 | 82.9787 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released activation body matches exactly after constraining the four menu
vtable call targets to the target function-pointer register.

## Outcome

Released trick-menu highlight restoration and visible-entry reset reproduce the target exactly.
