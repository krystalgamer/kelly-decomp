# _$_10bar_widget

- Address: `0x00360BF0`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size40-widget-dtors.cpp` |
| 2 | different | 0.0 | 0.0 | `size40-widget-dtors-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size40-widget-dtors-3.cpp` |

### Attempt 1 notes

The native empty destructor collapses to a 20-byte vptr-setting tail call.

### Attempt 2 notes

An explicit empty return produces the same native form.

### Attempt 3 notes

An explicit self reference is optimized away and produces the same form.

## Outcome

The manual-vtable implementation was removed after three native forms failed
to retain the target call frame.
