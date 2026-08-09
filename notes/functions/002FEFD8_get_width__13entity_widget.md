# get_width__13entity_widget

- Address: `0x002FEFD8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.h`
- Reference source: `KS/SRC/widget_entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-shared-accessors.cpp` |

### Attempt 1 notes

The shared `entity_widget` and entity declarations preserve the entity pointer
at 0x144 and the virtual `get_radius` call.

## Outcome

The manual vtable layout was removed.
