# erase__t4list2ZP13script_objectZt12my_allocator1ZP13script_objectGt14_List_iterator3ZP13script_objectZRP13script_objectZPP13script_objectT1

- Address: `0x0035CF88`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred script_object pointer list range erase after five source-level attempts; the released iterator loop, node unlink, allocator free-list update, and aggregate return reproduced, but the target STL temporary stack schedule did not.
