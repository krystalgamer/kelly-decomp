# entity_anim_tree_stl_dealloc__Fv

- Address: `0x00116010`
- Size: `0x128` (296 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/entity_anim.cpp:1333-1336,1379-1386; kelly-slaters-pro-surfer/KS/SRC/entity_anim.h:308-316; config/SLUS_203.34.symbol_addrs.txt: entity_anim_tree_stl_dealloc__Fv and entity_anim_tree_anims; notes/function_queue.csv: target row for 0x00116010; tmp/functions/00116010_entity_anim_tree_stl_dealloc__Fv/attempt-1/result.json. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released animation-tree STL cleanup failed the isolated compile because the vector header was unavailable; the sole attempt scored 0%.
