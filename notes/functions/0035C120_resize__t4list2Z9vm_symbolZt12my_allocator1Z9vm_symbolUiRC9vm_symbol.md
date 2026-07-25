# resize__t4list2Z9vm_symbolZt12my_allocator1Z9vm_symbolUiRC9vm_symbol

- Address: `0x0035C120`
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
