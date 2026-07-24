# erase__t4list2ZP5eventZt12my_allocator1ZP5eventGt14_List_iterator3ZP5eventZRP5eventZPP5eventT1

- Address: `0x002F3C98`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.3438 | 0.0 | `candidate.cpp` |
| 2 | different | 32.5 | 3.3333 | `candidate.cpp` |
| 3 | different | 12.5 | 0.0 | `candidate.cpp` |
| 4 | different | 11.6667 | 0.0 | `candidate.cpp` |
| 5 | different | 26.6667 | 0.0 | `candidate.cpp` |

## Outcome

Deferred event pointer list range erase after five source-level attempts; the released iterator loop, node unlink, allocator free-list update, and aggregate return reproduced, but the target STL temporary stack schedule did not.
