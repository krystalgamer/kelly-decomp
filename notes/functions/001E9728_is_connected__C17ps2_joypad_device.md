# is_connected__C17ps2_joypad_device

- Address: `0x001E9728`
- Size: `0xC` (12 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.h`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate tests `disconnected` at offset `0x6C` for zero.

## Outcome

The released `ps2_joypad_device::is_connected` predicate matched exactly on the first attempt.
