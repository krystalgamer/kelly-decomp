# vibrate__17ps2_joypad_devicef

- Address: `0x001E14E0`
- Size: `0x74` (116 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released no-rumble option, DualShock type/port fields, motor packet, intensity conversion, and pad call. The exact source body matched on attempt 1.

## Outcome

Matched PS2 joypad vibration
