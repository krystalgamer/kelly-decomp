# _M_erase__t8_Rb_tree5ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZPQ2t13instance_bank1Z17entity_track_tree5ref_tZt9_Identity1ZPQ2t13instance_bank1Z17entity_track_tree5ref_tZQ2t13instance_bank1Z17entity_track_tree13less_by_labelZt23__malloc_alloc_template1i0Pt13_Rb_tree_node1ZPQ2t13instance_bank1Z17entity_track_tree5ref_t

- Address: `0x0011FF88`
- Size: `0x60` (96 bytes)
- Object: `game/files_anim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 96.875 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Inspected the exact generated Rb-tree node layout and recursive erase pattern. After repairing long scratch paths, an explicit absolute recursive alias matched on attempt 3.

## Outcome

Matched label-index tree erasure
