# _M_erase__t8_Rb_tree5Z12charstarwrapZt4pair2ZC12charstarwrapZUiZt10_Select1st1Zt4pair2ZC12charstarwrapZUiZt4less1Z12charstarwrapZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1Zt4pair2ZC12charstarwrapZUi

- Address: `0x001416F0`
- Size: `0x60` (96 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Inspected the exact generated charstarwrap Rb-tree node layout and recursive erase pattern. An explicit absolute recursive alias matched on attempt 1.

## Outcome

Matched char pointer tree erasure
