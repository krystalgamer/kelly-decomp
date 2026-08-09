# scale_to__6widgetfff

- Address: `0x00360398`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-vm-widget-core.cpp` |

### Attempt 1 notes

The shared widget declaration preserves the timed overload's duplicated scale
value and four-argument virtual dispatch.

## Outcome

The manual vtable layout was removed.
