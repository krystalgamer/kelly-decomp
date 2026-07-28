# interpolate_vector__FP8vector3dG8vector3dT1fi

- Address: `0x00229BA8`
- Size: `0x170` (368 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.8043 | 9.7826 | `candidate.cpp` |

### Attempt 1 notes

Exact released interpolate_vector body with minimal self-contained declarations for rational_t, vector3d construction/assignment, scalar multiplication, addition, normalization, SMALL_DIST, fast_recip_sqrt, and sqrtf. The released assert is preserved as the non-debug no-op used by this compile.

## Outcome

The exact released vector interpolation differed from the target; the sole attempt scored 28.8043%.
