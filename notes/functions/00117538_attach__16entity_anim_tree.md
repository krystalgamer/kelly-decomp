# attach__16entity_anim_tree

- Address: `0x00117538`
- Size: `0x104` (260 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.6923 | 90.7692 | `candidate.cpp` |

### Attempt 1 notes

First-pass exact released body from KS/SRC/entity_anim.cpp lines 1938-1978, with isolated declarations copied/reduced from released anim.h and entity_anim.h. Single test scored 97.6923% (254/260 bytes; 59/65 instructions); status different. No variants or body rewrites attempted.

## Outcome

The exact released entity-animation attach definition differed from the target; the sole attempt scored 97.6923%.
