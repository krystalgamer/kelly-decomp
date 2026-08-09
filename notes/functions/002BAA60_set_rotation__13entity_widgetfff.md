# set_rotation__13entity_widgetfff

- Address: `0x002BAA60`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released Euler-angle stores and virtual `update_rot` dispatch use the shared
entity-widget declaration.

## Outcome

The manual object/vtable layout was removed; the released setter remains exact.
