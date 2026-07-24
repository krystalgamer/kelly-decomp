# add_controller__21world_dynamics_systemP10controller

- Address: `0x002A3988`
- Size: `0x68` (104 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.9286 | 17.8571 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 17.3077 | 0.0 | `candidate.cpp` |
| 4 | different | 17.3077 | 0.0 | `candidate.cpp` |
| 5 | different | 31.0345 | 17.2414 | `candidate.cpp` |

## Outcome

Deferred controller vector insertion after five source-faithful candidates; old STL inlining and branch-likely scheduling did not reproduce
