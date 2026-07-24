# get_scene_anim_tree__21world_dynamics_systemUi

- Address: `0x002A8FF8`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.7083 | 29.1667 | `candidate.cpp` |
| 2 | different | 77.0833 | 75.0 | `candidate.cpp` |
| 3 | different | 55.2083 | 33.3333 | `candidate.cpp` |
| 4 | different | 94.7917 | 91.6667 | `candidate.cpp` |
| 5 | different | 96.875 | 95.8333 | `candidate.cpp` |

## Outcome

Released scene animation tree lookup reached 23/24 matching instructions and 96.88%, but initial vector start/end load ordering resisted five candidates.
