# show__13entity_widget

- Address: `0x002B9B18`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override calls the shared `widget::show` and then dispatches the
shared virtual `update_rot`.

## Outcome

The manual entity-widget vtable and object layouts were removed.
