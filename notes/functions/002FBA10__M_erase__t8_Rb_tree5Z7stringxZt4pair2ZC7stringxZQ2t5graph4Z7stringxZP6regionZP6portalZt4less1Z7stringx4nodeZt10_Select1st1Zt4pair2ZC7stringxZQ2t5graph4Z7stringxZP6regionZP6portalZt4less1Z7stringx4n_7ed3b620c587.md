# _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt10_Select1st1Zt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt4less1Z7stringxZt12my_allocator1ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodePt13_Rb_tree_node1Zt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x002FBA10`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.6829 | 24.3902 | `candidate.cpp` |
| 2 | different | 75.0 | 68.2927 | `candidate.cpp` |
| 3 | different | 37.8049 | 14.6341 | `candidate.cpp` |
| 4 | different | 92.6829 | 90.2439 | `candidate.cpp` |
| 5 | different | 54.2683 | 19.5122 | `candidate.cpp` |

## Outcome

Five source-faithful RB-tree erasure variants reproduced destruction and allocator release but not four scheduling instructions.
