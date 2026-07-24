# erase__t4list2ZP11entity_poolZt12my_allocator1ZP11entity_poolGt14_List_iterator3ZP11entity_poolZRP11entity_poolZPP11entity_poolT1

- Address: `0x00312108`
- Size: `0x78` (120 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.3438 | 0.0 | `candidate.cpp` |
| 2 | different | 36.6667 | 3.3333 | `candidate.cpp` |
| 3 | different | 12.5 | 0.0 | `candidate.cpp` |
| 4 | different | 11.6667 | 0.0 | `candidate.cpp` |
| 5 | different | 26.6667 | 0.0 | `candidate.cpp` |

## Outcome

Deferred entity_pool pointer list range erase after five source-level attempts; the released iterator loop, node unlink, allocator free-list update, and aggregate return reproduced, but the target STL temporary stack schedule did not.
