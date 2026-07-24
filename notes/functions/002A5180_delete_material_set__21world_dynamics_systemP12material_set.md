# delete_material_set__21world_dynamics_systemP12material_set

- Address: `0x002A5180`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.3438 | 9.375 | `candidate.cpp` |
| 2 | different | 30.8333 | 35.7143 | `candidate.cpp` |
| 3 | different | 63.3333 | 10.0 | `candidate.cpp` |
| 4 | different | 25.7353 | 8.8235 | `candidate.cpp` |
| 5 | different | 15.8537 | 0.0 | `candidate.cpp` |

## Outcome

Deferred world_dynamics_system::delete_material_set after five source-level attempts; the released vector search, memmove erase, and end update reproduced, but the target STL iterator branch layout and load-hazard nops did not.
