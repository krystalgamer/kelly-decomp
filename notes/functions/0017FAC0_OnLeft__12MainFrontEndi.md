# OnLeft__12MainFrontEndi

- Address: `0x0017FAC0`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.2258 | 16.129 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released active-submenu branch, left/right sound, main-menu Left and UpdateHighlight calls, and exact virtual slots. Correcting both vtable layouts and preserving a common epilogue matched on attempt 2.

## Outcome

Matched main frontend left navigation
