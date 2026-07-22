# clear__t10_List_base2ZPQ215element_manager7contextZt12my_allocator1ZPQ215element_manager7context

- Address: `0x002F3C08`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 2 | different | 47.2222 | 5.5556 | `candidate.cpp` |
| 3 | different | 47.2222 | 22.2222 | `candidate.cpp` |
| 4 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Inspected the element_manager context-list instantiation and GCC 2 stl_list allocator pattern. Five source-only forms could not reproduce the target register and branch-delay schedule; the closest guarded pool form preserved behavior but selected branch-likely and nop delay slots.
