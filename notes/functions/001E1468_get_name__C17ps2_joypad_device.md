# get_name__C17ps2_joypad_device

- Address: `0x001E1468`
- Size: `0x34` (52 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released getter matched exactly with the real two-pointer `stringx` hidden-return ABI. The literal alias uses the HI16-adjusted address required to reference the original `ps2 input device` text at 0x004ce760.

## Outcome

The released PS2 joypad name getter matched exactly on the first attempt.
