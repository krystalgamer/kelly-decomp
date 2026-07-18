# get_abs_position__C18collision_geometry

- Address: `0x002FF328`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor loads `owner` at `0x0`, its position holder at `0x50`, and returns position at holder offset `0x30`.

## Outcome

The released `collision_geometry::get_abs_position` nested address calculation matched exactly on the first attempt.
