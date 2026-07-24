# __as__7mat_facRC7mat_fac

- Address: `0x002BC9F8`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.5833 | 1.6667 | `candidate.cpp` |
| 2 | different | 56.4516 | 48.3871 | `candidate.cpp` |
| 3 | different | 69.8276 | 44.8276 | `candidate.cpp` |
| 4 | different | 36.2903 | 22.5806 | `candidate.cpp` |
| 5 | different | 26.5625 | 9.375 | `candidate.cpp` |

## Outcome

Deferred material-facade assignment after five source-level attempts; the released 264-byte material copy and texture reference update reproduced, but the target aligned memcpy loop scheduling did not.
