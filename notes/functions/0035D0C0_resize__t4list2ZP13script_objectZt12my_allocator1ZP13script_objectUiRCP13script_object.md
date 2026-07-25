# resize__t4list2ZP13script_objectZt12my_allocator1ZP13script_objectUiRCP13script_object

- Address: `0x0035D0C0`
- Size: `0x98` (152 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.8636 | 6.8182 | `candidate.cpp` |
| 2 | different | 35.625 | 17.5 | `candidate.cpp` |
| 3 | different | 21.7391 | 6.5217 | `candidate.cpp` |
| 4 | different | 26.1905 | 9.5238 | `candidate.cpp` |
| 5 | different | 35.625 | 17.5 | `candidate.cpp` |

## Outcome

Five released-template and fixed-layout iterator variants reproduced list traversal and erase/insert semantics, but GCC2 iterator temporary scheduling did not match.
