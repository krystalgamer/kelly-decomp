# set_blend__16entity_anim_treeff

- Address: `0x001185C8`
- Size: `0x28` (40 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.0 | 0.0 | `size40-entity-core.cpp` |
| 2 | different | 45.0 | 0.0 | `size40-blend-2.cpp` |
| 3 | different | 45.0 | 0.0 | `size40-blend-3.cpp` |

## Outcome

Across three ordinary native definitions, the released arithmetic emits no pipeline NOP between the constant load and division. The closest candidate is
36 bytes rather than the target 40 bytes, so the matching-only body was
removed and the target function was deferred.
