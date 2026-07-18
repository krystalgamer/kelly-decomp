# get_pivot__C18collision_geometry

- Address: `0x002FF388`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base accessor returns the shared zero pivot through adjusted-high address materialization.

## Outcome

The released `collision_geometry::get_pivot` constant reference matched exactly on the first attempt.
