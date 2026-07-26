# OnUp__14PauseMenuClassi

- Address: `0x001A5578`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.8936 | 6.383 | `candidate.cpp` |
| 2 | different | 18.0851 | 6.383 | `candidate.cpp` |
| 3 | different | 16.5 | 2.0 | `candidate.cpp` |
| 4 | different | 21.5 | 8.0 | `candidate.cpp` |
| 5 | different | 92.5532 | 91.4894 | `candidate.cpp` |

### Attempt 1 notes

The shared source body used conditional selection and a different saved-register
allocation.

### Attempt 2 notes

Branch-shaped event selection recovered the target control flow but retained
direct high-half allocation.

### Attempt 3 notes

Saving an explicit high-half base expanded the prologue and function size.

### Attempt 4 notes

Fixed self and controller registers required an extra saved register.

### Attempt 5 notes

The final 188-byte variant matched 43 of 47 instructions; only four prologue
scheduling slots differed.

## Outcome

Five source-level variants reproduced the released navigation event and menu movement behavior, but four prologue scheduling slots remained different.
