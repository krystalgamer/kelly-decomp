# write__7os_filePvi

- Address: `0x001E0980`
- Size: `0xC8` (200 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.5 | 42.0 | `candidate.cpp` |
| 2 | different | 60.5 | 32.0 | `candidate.cpp` |
| 3 | different | 60.5 | 32.0 | `candidate.cpp` |
| 4 | different | 61.5 | 42.0 | `candidate.cpp` |
| 5 | different | 61.5 | 42.0 | `candidate.cpp` |

## Outcome

Five attempts recovered the write retry loop and file-state updates, but retry-global register scheduling remained different.
