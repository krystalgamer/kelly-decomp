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

The released Euler-angle stores and virtual update_rot dispatch matched exactly with vtable at 0x140, angles at 0x160-0x168, and update_rot at virtual slot 0x11c.

## Outcome

The released entity-widget rotation setter matched exactly on the first attempt.
