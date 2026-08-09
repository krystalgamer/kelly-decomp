# update_pos__13entity_widget

- Address: `0x002BA5B0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-widget-render-core.cpp` |

### Attempt 1 notes

The shared widget declaration and a local function pointer preserve the base
update followed by the normal entity transform refresh.

## Outcome

The compiler barrier was removed.
