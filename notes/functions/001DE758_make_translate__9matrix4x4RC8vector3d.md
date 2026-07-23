# make_translate__9matrix4x4RC8vector3d

- Address: `0x001DE758`
- Size: `0x58` (88 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_algebra.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_algebra.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released matrix4x4::make_translate body and vector row/field ordering. The released stores matched byte-exactly.

## Outcome

Matched released matrix translation builder
