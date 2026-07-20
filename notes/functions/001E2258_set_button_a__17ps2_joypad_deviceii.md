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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC joypad vtable layout preserves the released `state > 127` conversion and virtual `set_button_d` dispatch at slot 0x88.

## Outcome

The released PS2 analog-button setter matched exactly on the first attempt.
