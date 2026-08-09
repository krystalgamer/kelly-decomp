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

The released null guard and virtual `po_anim::set_time` dispatch use the shared
animation hierarchy.

## Outcome

The manual vtable-slot layout was removed; the released setter remains exact.
