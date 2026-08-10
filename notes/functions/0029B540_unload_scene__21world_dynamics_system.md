# unload_scene__21world_dynamics_system

- Address: `0x0029B540`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released unload flow and reconstructed the two controller fields plus deleting-destructor virtual slot. It matched on attempt 1.

## Outcome

The manual controller destructor vtable was removed. The shared controller
hierarchy does not yet expose its deleting destructor, so the wrapper is
deferred.
