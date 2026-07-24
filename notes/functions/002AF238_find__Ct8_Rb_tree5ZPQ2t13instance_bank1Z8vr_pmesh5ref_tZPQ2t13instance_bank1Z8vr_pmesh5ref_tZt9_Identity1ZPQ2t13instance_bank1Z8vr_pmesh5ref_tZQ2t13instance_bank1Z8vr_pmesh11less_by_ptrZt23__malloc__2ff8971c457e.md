# find__Ct8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZQ2t13instance_bank1Z8vr_pmesh11less_by_ptrZt23__malloc_alloc_template1i0RCPQ2t13instance_bank1Z8vr_pmesh5ref_t

- Address: `0x002AF238`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.3333 | 10.0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 50.8333 | 16.6667 | `candidate.cpp` |
| 4 | different | 24.1667 | 6.6667 | `candidate.cpp` |
| 5 | different | 28.3333 | 6.6667 | `candidate.cpp` |

## Outcome

Deferred mesh instance-bank red-black tree find after five source-level attempts; the released lower-bound traversal and pointer comparator reproduced, but the target STL register allocation and branch-likely layout did not.
