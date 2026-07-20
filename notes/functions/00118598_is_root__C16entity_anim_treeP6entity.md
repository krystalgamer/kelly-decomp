# is_root__C16entity_anim_treeP6entity

- Address: `0x00118598`
- Size: `0x2C` (44 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal vector layout preserves the begin/end pointers and root animation entity at offset eight.

## Outcome

The released `entity_anim_tree::is_root` implementation matched exactly.
