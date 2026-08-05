# set_ks_controller__21world_dynamics_systemiP22kellyslater_controller

- Address: `0x002A39F0`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.0 | 0.0 | `size40-world-core.cpp` |
| 2 | different | 80.0 | 0.0 | `size40-world-core-2.cpp` |
| 3 | different | 80.0 | 0.0 | `size40-world-core-3.cpp` |

## Outcome

Across three ordinary forms, the the only 40-byte native form schedules the RA save four bytes later than the target. The matching-only implementation
was removed and the target function was deferred.
