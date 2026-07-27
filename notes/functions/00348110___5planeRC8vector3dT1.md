# __5planeRC8vector3dT1

- Address: `0x00348110`
- Size: `0x108` (264 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/plane.cpp`
- Reference source: `KS/SRC/plane.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 25.7576 | `candidate.cpp` |

### Attempt 1 notes

Extracted the released point/normal plane constructor exactly from `KS/SRC/plane.cpp:23-29`, with only the required `rational_t`, `vector3d`, math helper, dot product, and plane layout declarations. The non-placeholder candidate compiled and was tested exactly once; it differed at 50.0% byte score (25.7576% instruction score), so no variants were attempted.

## Outcome

The exact released plane constructor differed from the target; the sole attempt scored 50%.
