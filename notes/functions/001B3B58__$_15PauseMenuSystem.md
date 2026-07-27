# _$_15PauseMenuSystem

- Address: `0x001B3B58`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 68.3333 | 58.3333 | `candidate.cpp` |
| 3 | different | 67.0833 | 58.3333 | `candidate.cpp` |
| 4 | different | 67.0833 | 58.3333 | `candidate.cpp` |
| 5 | different | 69.5833 | 58.3333 | `candidate.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The target inlines the full FEMenuSystem base teardown, while the tested vtable-ownership and explicit cleanup spellings do not reproduce the complete generated destructor sequence.
