# IsDebugMenuDisplayed__Fv

- Address: `0x001B4BD8`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper loads the global menu system and tests its active state at offset `0x470`.

## Outcome

The released `IsDebugMenuDisplayed` nested global predicate matched exactly on the first attempt.
