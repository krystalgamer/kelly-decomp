# stop_vibration__17ps2_joypad_device

- Address: `0x001E1628`
- Size: `0x64` (100 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact no-rumble option field, joypad port/type offsets, DualShock2 constant, six-byte motor buffer, memset, and pad call. It matched on attempt 1.

## Outcome

Matched joypad vibration stop
