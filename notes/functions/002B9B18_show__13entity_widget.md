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

The released override calls `widget::show` and then dispatches the virtual `update_rot`. The recovered vptr offset, old-GCC adjustment entry, and virtual slot reproduce both source-level calls exactly.

## Outcome

The entity-widget show override matches with its released base show and virtual rotation update.
