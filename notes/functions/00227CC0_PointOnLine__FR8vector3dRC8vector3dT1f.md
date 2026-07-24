# PointOnLine__FR8vector3dRC8vector3dT1f

- Address: `0x00227CC0`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.3871 | 3.2258 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reconstructed the absent released helper from the exact vector interpolation target and inspected vector3d layout. Explicit component assignment and released FPU register roles matched on attempt 2.

## Outcome

Matched point-on-line interpolation
