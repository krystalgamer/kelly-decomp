# scale__9matrix4x4f

- Address: `0x001DE9A0`
- Size: `0x94` (148 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_algebra.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_algebra.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released scalar scaling of the first three matrix components in each row reproduced all floating-point loads, multiplies, and stores byte-for-byte.

## Outcome

Matched matrix scalar scale
