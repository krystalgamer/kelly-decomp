# xform__7cg_noneRC2po

- Address: `0x002DC2B8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override forwards to `collision_geometry::xform`; a barrier prevents a sibling call.

## Outcome

The released `cg_none::xform` forwarding wrapper matched exactly on the first attempt.
