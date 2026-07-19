# set_render_scale__6entityRC8vector3d

- Address: `0x00145258`
- Size: `0x20` (32 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 12.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The POD vector assignment used 64-bit aggregate copies instead of the target scalar float sequence.

### Attempt 2 notes

A minimal layout places `render_scale` at offset 0x1dc and preserves the three-float assignment.

## Outcome

The inline `entity::set_render_scale` setter matched exactly.
