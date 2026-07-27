# region_update_poss_collide__6entity

- Address: `0x00139090`
- Size: `0xF0` (240 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate-1-exact-released.cpp` |
| 2 | different | 31.0484 | 9.6774 | `candidate-2.cpp` |
| 3 | different | 47.0833 | 8.3333 | `candidate-3.cpp` |
| 4 | different | 47.0833 | 8.3333 | `candidate-4.cpp` |
| 5 | different | 31.0484 | 9.6774 | `candidate-5.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The exact region-tree traversal and collision-region call are recovered, but old EE GCC retains a different iterator temporary and register schedule.
