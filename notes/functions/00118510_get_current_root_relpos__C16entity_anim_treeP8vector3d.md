# get_current_root_relpos__C16entity_anim_treeP8vector3d

- Address: `0x00118510`
- Size: `0x88` (136 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 19.8529 | 0.0 | `candidate.cpp` |
| 4 | different | 39.8649 | 24.3243 | `candidate.cpp` |
| 5 | different | 39.8649 | 24.3243 | `candidate.cpp` |

## Outcome

Deferred the released root-relative animation query after five source-level attempts; root selection, animation predicates, attached/detached control paths, and PO animation calls were reconstructed, but inlined predicate control flow remained different.
