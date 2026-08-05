# serial_in__FR10chunk_fileP8vr_pmesh

- Address: `0x002D3F98`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.1111 | 11.1111 | `size36-pmesh-serial-1.cpp` |
| 2 | different | 11.1111 | 11.1111 | `size36-pmesh-serial-2.cpp` |
| 3 | different | 11.1111 | 11.1111 | `size36-pmesh-serial-3.cpp` |

## Outcome

All three ordinary forms compile as 16-byte sibling calls instead of the
target 36-byte retained call frame. The barrier-dependent matching body was
removed and the original target function was deferred.
