# apply_radius_scale__17collision_capsulef

- Address: `0x002D7F38`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method multiplies relative radius at `0x24` by the scale and stores absolute radius at `0x40`.

## Outcome

The released `collision_capsule::apply_radius_scale` multiply-store matched exactly on the first attempt.
