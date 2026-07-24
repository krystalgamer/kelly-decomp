# find__Ct8_Rb_tree5ZPQ2t13instance_bank1Z7cg_mesh5ref_tZPQ2t13instance_bank1Z7cg_mesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z7cg_mesh5ref_tZQ2t13instance_bank1Z7cg_mesh11less_by_ptrZt23__malloc_alloc_template1i0RCPQ2t13instance_bank1Z7cg_mesh5ref_t

- Address: `0x0013F538`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.3333 | 13.3333 | `candidate.cpp` |
| 2 | different | 41.4062 | 21.875 | `candidate.cpp` |
| 3 | different | 36.6667 | 13.3333 | `candidate.cpp` |
| 4 | different | 46.6667 | 23.3333 | `candidate.cpp` |
| 5 | different | 46.6667 | 23.3333 | `candidate.cpp` |

## Outcome

Deferred collision-mesh instance tree lookup after five source-level attempts; the released pointer-ordered tree traversal and final lower-bound validation reproduced, but the target node/key register allocation did not.
