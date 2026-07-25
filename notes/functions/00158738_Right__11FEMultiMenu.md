# Right__11FEMultiMenu

- Address: `0x00158738`
- Size: `0x94` (148 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.4595 | 40.5405 | `candidate.cpp` |
| 2 | different | 54.6053 | 39.4737 | `candidate.cpp` |
| 3 | different | 59.4595 | 40.5405 | `candidate.cpp` |
| 4 | different | 59.4595 | 40.5405 | `candidate.cpp` |
| 5 | different | 36.25 | 22.5 | `candidate.cpp` |

## Outcome

Released FEMultiMenu::Right source compiled with five faithful control-flow and register-allocation variants, but target-specific branch-likely highlighted-pointer reload scheduling did not match.
