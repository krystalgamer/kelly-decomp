# get_axis_count__C17ps2_joypad_device

- Address: `0x001E16C0`
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

The released method returns `JOY_PS2_NUM_AXES`, whose target value is `23`.

## Outcome

The released fixed joypad axis count matched exactly on the first attempt.
