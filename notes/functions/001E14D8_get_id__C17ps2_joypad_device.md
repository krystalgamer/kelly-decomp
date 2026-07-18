# get_id__C17ps2_joypad_device

- Address: `0x001E14D8`
- Size: `0x8` (8 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method returns `device_id`; the target layout places it at offset `0x0`.

## Outcome

The released `ps2_joypad_device::get_id` field getter matched exactly on the first attempt.
