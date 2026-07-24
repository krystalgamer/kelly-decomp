# erase__t4list2ZQ27ai_path8waypointZt12my_allocator1ZQ27ai_path8waypointGt14_List_iterator3ZQ27ai_path8waypointZRQ27ai_path8waypointZPQ27ai_path8waypointT1

- Address: `0x001101D8`
- Size: `0x78` (120 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 0.0 | `candidate.cpp` |
| 2 | different | 25.7812 | 0.0 | `candidate.cpp` |
| 3 | different | 20.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 15.0 | 0.0 | `candidate.cpp` |
| 5 | different | 15.0 | 0.0 | `candidate.cpp` |

## Outcome

Deferred AI waypoint-list erasure after five source-level attempts; the released node unlinking, allocator free-list update, iterator progression, and result reproduced, but the target STL iterator stack layout did not.
