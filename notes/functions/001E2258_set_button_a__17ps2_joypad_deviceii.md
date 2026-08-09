# set_button_a__17ps2_joypad_deviceii

- Address: `0x001E2258`
- Size: `0x30` (48 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-ps2-core.cpp` |

### Attempt 1 notes

The shared PS2 joypad declaration preserves the released `state > 127`
conversion and virtual `set_button_d` dispatch.

## Outcome

The manual vtable layout was removed.
