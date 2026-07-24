# _$_7os_file

- Address: `0x001DFD10`
- Size: `0x5C` (92 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.0 | 60.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released os_file destructor and layout, stringx base destruction, close helper, and deleting-destructor flags. A final-call continuation barrier matched on attempt 2.

## Outcome

Matched os_file destructor
