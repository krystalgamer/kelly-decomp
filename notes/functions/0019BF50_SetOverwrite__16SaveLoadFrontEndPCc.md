# SetOverwrite__16SaveLoadFrontEndPCc

- Address: `0x0019BF50`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-frontend-actions.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-frontend-actions-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-frontend-actions-3.cpp` |

### Attempt 1 notes

The shared save/load layout preserves `desc` at 0x3230 and `overwrite` at 0x32e0; an ordinary local `strcpy` pointer retains the conditional call frame.

## Outcome

The released `SaveLoadFrontEnd::SetOverwrite` implementation matched exactly.
