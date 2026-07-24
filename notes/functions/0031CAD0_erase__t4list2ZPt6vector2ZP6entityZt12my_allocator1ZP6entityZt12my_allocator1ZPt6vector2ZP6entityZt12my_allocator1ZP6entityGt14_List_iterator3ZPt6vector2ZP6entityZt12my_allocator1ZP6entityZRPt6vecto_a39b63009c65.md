# erase__t4list2ZPt6vector2ZP6entityZt12my_allocator1ZP6entityZt12my_allocator1ZPt6vector2ZP6entityZt12my_allocator1ZP6entityGt14_List_iterator3ZPt6vector2ZP6entityZt12my_allocator1ZP6entityZRPt6vector2ZP6entityZt12my_allocator1ZP6entityZPPt6vector2ZP6entityZt12my_allocator1ZP6entityT1

- Address: `0x0031CAD0`
- Size: `0x78` (120 bytes)
- Object: `game/files_script`
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

Deferred vector<entity*> pointer list range erase after five source-level attempts; the released iterator loop, node unlink, allocator free-list update, and aggregate return reproduced, but the target STL temporary stack schedule did not.
