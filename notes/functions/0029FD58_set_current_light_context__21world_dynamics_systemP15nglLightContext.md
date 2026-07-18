# set_current_light_context__21world_dynamics_systemP15nglLightContext

- Address: `0x0029FD58`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method returns the old pointer from offset `0x360` while replacing it with the new context.

## Outcome

The released `world_dynamics_system::set_current_light_context` exchange matched exactly on the first attempt.
