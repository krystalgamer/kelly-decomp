# insert__t4list2ZP13script_objectZt12my_allocator1ZP13script_objectGt14_List_iterator3ZP13script_objectZRP13script_objectZPP13script_objectUiRCP13script_object

- Address: `0x0035D000`
- Size: `0xC0` (192 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.7755 | 20.4082 | `candidate.cpp` |
| 2 | different | 38.7755 | 20.4082 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 79.6875 | 75.0 | `candidate.cpp` |
| 5 | different | 23.9796 | 6.1224 | `candidate.cpp` |

## Outcome

Five source-level attempts could not reproduce the old GNU list allocator inlining and register schedule for script-object pointers.
