# get_core_radius__C17collision_capsule

- Address: `0x002FF578`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.h`
- Reference source: `KS/SRC/capsule.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released core-radius accessor returns `abs_cap.radius` at absolute offset `0x40`.

## Outcome

The released `collision_capsule::get_core_radius` getter matched exactly on the first attempt.
