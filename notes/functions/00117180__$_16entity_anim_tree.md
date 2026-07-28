# _$_16entity_anim_tree

- Address: `0x00117180`
- Size: `0x160` (352 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released source for _$_16entity_anim_tree. Result `compile_failed`, score 0.0000; no retry or variant was made.

## Outcome

The exact released entity-animation-tree destructor failed the isolated compile because a detach declaration was unavailable; the sole attempt scored 0%.
