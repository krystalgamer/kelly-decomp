# set_flag__16entity_anim_tree12anim_flags_t

- Address: `0x00120A40`
- Size: `0x30` (48 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.h`
- Reference source: `KS/SRC/entity_anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.0833 | 8.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Restoring the released nested `anim_control::set_flag(..., true)` calls keeps the two subobject pointers at 0x48/0x84 and then updates the base 16-bit flag word.

## Outcome

The released one-argument `entity_anim_tree::set_flag` implementation matched exactly on attempt two.
