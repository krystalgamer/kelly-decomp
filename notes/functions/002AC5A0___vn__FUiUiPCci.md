# __vn__FUiUiPCci

- Address: `0x002AC5A0`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.8276 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released flagged array-allocation wrapper, mem_malloc call, null error path, and argument order. Correcting the released mangled helper aliases matched on attempt 2.

## Outcome

Matched flagged array allocation
