# set_time__11entity_animf

- Address: `0x00120950`
- Size: `0x34` (52 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.h`
- Reference source: `KS/SRC/entity_anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released null guard and virtual `po_anim::set_time` dispatch matched exactly with `po_anim_ptr` at offset 0x0c and the virtual slot at 0x24.

## Outcome

The released entity-animation time setter matched exactly on the first attempt.
