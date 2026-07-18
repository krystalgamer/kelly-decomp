# xform__18collision_geometryRC2po

- Address: `0x002D89C0`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base transform marks the word-sized `valid` flag at offset `0x4`.

## Outcome

The released `collision_geometry::xform` validity set matched exactly on the first attempt.
