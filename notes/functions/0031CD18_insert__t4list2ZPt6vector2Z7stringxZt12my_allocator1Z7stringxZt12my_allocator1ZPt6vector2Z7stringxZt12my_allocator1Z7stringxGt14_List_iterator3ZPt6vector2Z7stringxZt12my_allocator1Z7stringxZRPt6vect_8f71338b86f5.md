# insert__t4list2ZPt6vector2Z7stringxZt12my_allocator1Z7stringxZt12my_allocator1ZPt6vector2Z7stringxZt12my_allocator1Z7stringxGt14_List_iterator3ZPt6vector2Z7stringxZt12my_allocator1Z7stringxZRPt6vector2Z7stringxZt12my_allocator1Z7stringxZPPt6vector2Z7stringxZt12my_allocator1Z7stringxUiRCPt6vector2Z7stringxZt12my_allocator1Z7stringx

- Address: `0x0031CD18`
- Size: `0xC0` (192 bytes)
- Object: `game/files_script`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 40.625 | 10.4167 | `candidate.cpp` |
| 3 | different | 50.5208 | 27.0833 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five source-level attempts recovered the GNU list insertion shape, but old STL allocator inlining and register scheduling did not reproduce the target.
