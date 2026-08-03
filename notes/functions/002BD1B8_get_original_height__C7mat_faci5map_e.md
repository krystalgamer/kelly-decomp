# get_original_height__C7mat_faci5map_e

- Address: `0x002BD1B8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared `mat_fac` and PS2 `nglTexture` declarations place `Map` and `Height`
at their released offsets; spelling the null early return preserves branch direction.

## Outcome

The released NGL accessor matches natively through the canonical material layout.
