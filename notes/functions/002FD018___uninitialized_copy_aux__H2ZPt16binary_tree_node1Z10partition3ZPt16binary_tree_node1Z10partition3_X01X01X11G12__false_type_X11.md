# __uninitialized_copy_aux__H2ZPt16binary_tree_node1Z10partition3ZPt16binary_tree_node1Z10partition3_X01X01X11G12__false_type_X11

- Address: `0x002FD018`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Inspected the generated binary-tree node and partition3 layouts and released uninitialized-copy construction pattern. The source-faithful loop matched on attempt 1.

## Outcome

Matched partition tree uninitialized copy
