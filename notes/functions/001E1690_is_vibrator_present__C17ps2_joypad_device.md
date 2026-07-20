# is_vibrator_present__C17ps2_joypad_device

- Address: `0x001E1690`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal layouts preserve the global no-rumble flag and signed pad type at 0x66.

## Outcome

The released PS2 vibrator-presence predicate matched exactly.
