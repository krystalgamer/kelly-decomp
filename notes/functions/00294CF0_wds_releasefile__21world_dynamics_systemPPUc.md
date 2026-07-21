# wds_releasefile__21world_dynamics_systemPPUc

- Address: `0x00294CF0`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.7647 | 23.5294 | `candidate.cpp` |
| 2 | different | 98.5294 | 94.1176 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Attempt one missed the released static declaration. Restoring it reproduced the branch-likely cleanup; the final carried singleton alias reproduces the linker-adjusted high half exactly.

## Outcome

The released world file release helper matches its stash-only guard, free, and pointer reset.
