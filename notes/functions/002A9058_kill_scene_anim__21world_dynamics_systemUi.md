# kill_scene_anim__21world_dynamics_systemUi

- Address: `0x002A9058`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.0488 | 65.8537 | `candidate.cpp` |
| 2 | different | 82.9268 | 78.0488 | `candidate.cpp` |
| 3 | different | 88.4146 | 85.3659 | `candidate.cpp` |
| 4 | different | 76.8293 | 73.1707 | `candidate.cpp` |
| 5 | different | 88.4146 | 85.3659 | `candidate.cpp` |

## Outcome

Five released scene-animation traversal variants reproduced behavior but not prologue vector-register scheduling.
