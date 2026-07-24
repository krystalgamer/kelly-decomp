# _$_18TrickTypeMenuClass

- Address: `0x001AC358`
- Size: `0x8C` (140 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.9444 | 72.2222 | `candidate.cpp` |
| 2 | different | 80.7143 | 74.2857 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released four-submenu destructor matched after expressing the destructor entry as a free ABI function and blocking the final base-destructor tail call.

## Outcome

The released trick-type menu destructor matched exactly on the third attempt.
