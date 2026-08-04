# apply_radius_damage__21world_dynamics_systemG8vector3dfii

- Address: `0x002A8DA8`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-gameplay-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-gameplay-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-gameplay-probes-3.cpp` |

## Outcome

All three diagnostic-call forms tail-call `error` in 12 bytes after loading the released string. The target retains a 32-byte frame, so the unsupported stub was deferred.
