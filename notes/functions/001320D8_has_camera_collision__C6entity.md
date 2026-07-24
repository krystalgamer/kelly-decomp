# has_camera_collision__C6entity

- Address: `0x001320D8`
- Size: `0x70` (112 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.8571 | 89.2857 | `candidate.cpp` |
| 2 | different | 98.2143 | 96.4286 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the colgeom pointer, collision-active entity slot, camera-collision colgeom slot, and short-circuit result. Explicit boolean normalization matched on attempt 3.

## Outcome

Matched camera collision predicate
