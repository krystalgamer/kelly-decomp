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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the released inline call from the widget's entity pointer at 0x144 to `entity::get_radius()`.

## Outcome

The released `entity_widget::get_width` thunk matched exactly on the first attempt.
