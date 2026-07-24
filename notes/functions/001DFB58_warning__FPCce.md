# warning__FPCce

- Address: `0x001DFB58`
- Size: `0x80` (128 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_errmsg.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_errmsg.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.75 | 40.625 | `candidate.cpp` |
| 2 | different | 25.7812 | 12.5 | `candidate.cpp` |
| 3 | different | 68.75 | 40.625 | `candidate.cpp` |
| 4 | different | 13.2812 | 3.125 | `candidate.cpp` |
| 5 | different | 58.5938 | 34.375 | `candidate.cpp` |

## Outcome

Deferred the released variadic warning wrapper after five source-level attempts; the stripped compiler environment could not reproduce the original mixed-register va_start save area and frame layout.
