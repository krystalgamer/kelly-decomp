# clear__t10_List_base2Z9vm_symbolZt12my_allocator1Z9vm_symbol

- Address: `0x0035BE10`
- Size: `0x98` (152 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.1053 | 26.3158 | `candidate.cpp` |
| 2 | different | 33.5526 | 15.7895 | `candidate.cpp` |
| 3 | different | 63.1579 | 42.1053 | `candidate.cpp` |
| 4 | different | 38.4615 | 12.8205 | `candidate.cpp` |
| 5 | different | 42.1053 | 26.3158 | `candidate.cpp` |

## Outcome

Five released-template and allocator-faithful variants reproduced vm_symbol destruction and free-list recycling, but GCC2 prologue and destructor call scheduling did not match.
