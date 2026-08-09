# update_scale__12timer_widget

- Address: `0x002BB7E8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-widget-render-core.cpp` |

### Attempt 1 notes

The shared timer-widget declaration and a local function pointer preserve the
base update followed by the normal resize call.

## Outcome

The compiler barrier was removed.
