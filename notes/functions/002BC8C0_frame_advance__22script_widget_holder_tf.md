# frame_advance__22script_widget_holder_tf

- Address: `0x002BC8C0`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `size40-widget-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-widget-core-2.cpp` |

### Attempt 1 notes

The exact released body collapses the conditional base call to a 28-byte
sibling call.

### Attempt 2 notes

An ordinary local base-frame pointer retains the released conditional call and
the target call frame.

## Outcome

The shared released class and local base-call form match without a compiler
barrier.
