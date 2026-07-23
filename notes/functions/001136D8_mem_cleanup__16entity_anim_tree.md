# mem_cleanup__16entity_anim_tree

- Address: `0x001136D8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact static-allocation cleanup pattern and entity_anim_tree allocation/data/callback globals. It matched byte-exactly.

## Outcome

Matched entity_anim_tree memory cleanup
