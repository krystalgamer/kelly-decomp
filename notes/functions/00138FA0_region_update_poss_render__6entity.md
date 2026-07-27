# region_update_poss_render__6entity

- Address: `0x00138FA0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.0484 | 9.6774 | `candidate-round1.cpp` |
| 2 | different | 27.8169 | 8.4507 | `candidate-round2.cpp` |
| 3 | different | 31.0484 | 9.6774 | `candidate-round3.cpp` |
| 4 | different | 31.0484 | 9.6774 | `candidate-round4.cpp` |
| 5 | different | 31.0484 | 9.6774 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-faithful attempts. The canonical region-tree traversal and render-region call are recovered, but isolated EE GCC caches the sentinel and current node instead of reproducing the target stack-iterator reload schedule.
