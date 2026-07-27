# region_update_poss_active__6entity

- Address: `0x00138EB0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.0484 | 9.6774 | `candidate-1-exact-released.cpp` |
| 2 | different | 47.0833 | 8.3333 | `candidate-2-stl-iterator-base.cpp` |
| 3 | different | 47.0833 | 8.3333 | `candidate-3-base-member-compare.cpp` |
| 4 | different | 31.0484 | 9.6774 | `candidate-4-base-implicit-copy.cpp` |
| 5 | different | 47.0833 | 8.3333 | `candidate-5-derived-member-compare.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact red-black-tree traversal and active-region call are recovered, but old EE GCC chooses a different iterator temporary and register-allocation schedule.
