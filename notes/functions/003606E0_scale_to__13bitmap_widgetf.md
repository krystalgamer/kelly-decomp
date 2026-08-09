# scale_to__13bitmap_widgetf

- Address: `0x003606E0`
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

The shared bitmap-widget declaration preserves the duplicated scale value and
virtual two-argument dispatch.

## Outcome

The manual vtable layout was removed.
