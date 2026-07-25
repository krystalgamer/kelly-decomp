# usercam_frame_advance__21world_dynamics_systemf

- Address: `0x0029FD68`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.6579 | 31.5789 | `candidate.cpp` |
| 2 | different | 91.4474 | 89.4737 | `candidate.cpp` |
| 3 | different | 91.4474 | 89.4737 | `candidate.cpp` |
| 4 | different | 91.4474 | 89.4737 | `candidate.cpp` |
| 5 | different | 17.9487 | 5.1282 | `candidate.cpp` |

## Outcome

Five released-source user-camera advance variants reproduced all four virtual calls, but target-specific prologue save ordering did not match.
