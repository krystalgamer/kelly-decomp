# KSReleaseFile__FP10nglFileBuf

- Address: `0x001E3300`
- Size: `0x34` (52 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.0769 | 46.1538 | `release-file-1.cpp` |
| 2 | different | 46.1538 | 38.4615 | `release-file-2.cpp` |
| 3 | different | 46.1538 | 38.4615 | `release-file-3.cpp` |

## Outcome

Released release-file body tail-calls memset under isolated native compilation; three ordinary C++ clearing forms did not reproduce the target.
