# resize__t4list2ZPt6vector2Z8vector3dZt12my_allocator1Z8vector3dZt12my_allocator1ZPt6vector2Z8vector3dZt12my_allocator1Z8vector3dUiRCPt6vector2Z8vector3dZt12my_allocator1Z8vector3d

- Address: `0x0031C868`
- Size: `0x98` (152 bytes)
- Object: `game/files_script`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.3947 | 0.0 | `candidate.cpp` |
| 2 | different | 23.8636 | 0.0 | `candidate.cpp` |
| 3 | different | 20.3947 | 0.0 | `candidate.cpp` |
| 4 | different | 29.6053 | 5.2632 | `candidate.cpp` |
| 5 | different | 21.0526 | 0.0 | `candidate.cpp` |

## Outcome

Five released-template and explicit-ABI list resize variants reproduced traversal and erase/insert semantics, but GCC2 iterator stack materialization and call scheduling did not match.
