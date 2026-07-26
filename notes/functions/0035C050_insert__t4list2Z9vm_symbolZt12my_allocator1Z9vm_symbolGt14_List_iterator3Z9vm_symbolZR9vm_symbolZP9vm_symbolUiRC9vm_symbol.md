# insert__t4list2Z9vm_symbolZt12my_allocator1Z9vm_symbolGt14_List_iterator3Z9vm_symbolZR9vm_symbolZP9vm_symbolUiRC9vm_symbol

- Address: `0x0035C050`
- Size: `0xCC` (204 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 28.4314 | 0.0 | `candidate.cpp` |
| 3 | different | 28.4314 | 0.0 | `candidate.cpp` |
| 4 | different | 28.4314 | 0.0 | `candidate.cpp` |
| 5 | different | 28.4314 | 0.0 | `candidate.cpp` |

## Outcome

The released repeated-list insertion behavior was recovered, but old-STL allocator and iterator temporary scheduling remained irreducible after five source-level attempts.
