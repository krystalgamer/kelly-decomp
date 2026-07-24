# KSReadFile__FPCcP10nglFileBufUi

- Address: `0x001E32A0`
- Size: `0x60` (96 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released lock/unlock and world readfile flow, nglFileBuf layout, global lock, and five-argument ABI. It matched on attempt 1.

## Outcome

Matched KS file reader
