# set_rhw__11text_widgetf

- Address: `0x00340810`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.0769 | 92.3077 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled widget as an empty base and placed 0x158 bytes of padding in text_widget. The old compiler gave the empty base a four-byte extent, placing rhw at 0x15c and leaving one store immediate different.

### Attempt 2 notes

The released RHW assignment and active-layer counter decrement matched exactly with the 0x158-byte widget base layout. The layer alias is HI16-adjusted for the real 0x0045b730 global.

## Outcome

The released text-widget RHW setter matched exactly.
