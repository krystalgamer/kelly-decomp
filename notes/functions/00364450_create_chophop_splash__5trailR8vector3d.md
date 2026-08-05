# create_chophop_splash__5trailR8vector3d

- Address: `0x00364450`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.7778 | 0.0 | `size36-trail-splash-1.cpp` |
| 2 | different | 2.7778 | 0.0 | `size36-trail-splash-2.cpp` |
| 3 | different | 2.7778 | 0.0 | `size36-trail-splash-3.cpp` |

## Outcome

Three ordinary native definitions failed to reproduce the target 36-byte call
frame; the closest form emits 16 bytes. The matching-only body was removed
and the original target function was deferred.
