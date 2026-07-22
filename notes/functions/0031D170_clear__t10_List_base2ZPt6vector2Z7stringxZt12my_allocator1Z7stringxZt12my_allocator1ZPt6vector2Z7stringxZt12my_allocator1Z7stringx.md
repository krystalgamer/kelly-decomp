# clear__t10_List_base2ZPt6vector2Z7stringxZt12my_allocator1Z7stringxZt12my_allocator1ZPt6vector2Z7stringxZt12my_allocator1Z7stringx

- Address: `0x0031D170`
- Size: `0x48` (72 bytes)
- Object: `game/files_script`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 0.0 | `variant-1.cpp` |
| 2 | different | 47.2222 | 5.5556 | `variant-2.cpp` |
| 3 | different | 47.2222 | 22.2222 | `variant-3.cpp` |
| 4 | different | 19.7368 | 0.0 | `variant-4.cpp` |
| 5 | different | 37.5 | 0.0 | `variant-5.cpp` |

## Outcome

Inspected str_list in script_lib_list.h and reused the shared GCC 2 list allocator context for vector<stringx> pointers. Five source-only clear forms could not match the target register and delay-slot schedule.
