# collide_sphere_partition3__FRC8vector3dfRC10partition3R8vector3d

- Address: `0x002E1008`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.7447 | 0.0 | `candidate.cpp` |
| 2 | different | 25.5 | 0.0 | `candidate.cpp` |
| 3 | different | 7.0455 | 0.0 | `candidate.cpp` |
| 4 | different | 9.8765 | 0.0 | `candidate.cpp` |
| 5 | different | 20.7447 | 0.0 | `candidate.cpp` |

### Attempt 5 notes

Five source-level vector temporary variants reproduced the collision result but
not the target floating-point temporary schedule.

## Outcome

Five source-level variants reproduced sphere-plane collision semantics, but the released vector temporary and floating-point schedule did not match.
