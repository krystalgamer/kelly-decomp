# __18collision_geometry

- Address: `0x002D8638`
- Size: `0x18` (24 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target constructor clears owner at `0x4`, installs the collision-geometry vptr at `0x8`, and returns `this`.

## Outcome

The target `collision_geometry` constructor initialization matched exactly on the first attempt.
