# Init_Filter__13vector_filterG8vector3d

- Address: `0x00229D18`
- Size: `0x40` (64 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.1429 | 2.8571 | `candidate.cpp` |
| 2 | different | 12.963 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The literal by-value reconstruction introduced an ABI copy and expanded the loop.

### Attempt 2 notes

Using the effective reference ABI removed the copy, but independent array pointers still expanded the loop.

### Attempt 3 notes

Walking the contiguous released filter arrays from xwPos reproduces the compact two-iteration initialization exactly.

## Outcome

The contiguous six-array filter initialization matches exactly using the effective vector reference ABI.
