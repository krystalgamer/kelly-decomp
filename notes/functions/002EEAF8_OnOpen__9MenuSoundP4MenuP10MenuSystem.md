# OnOpen__9MenuSoundP4MenuP10MenuSystem

- Address: `0x002EEAF8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

Three ordinary forms all tail-call `Menu::OnOpen`. The target retains a
28-byte frame, so the barrier-dependent wrapper was deferred.
