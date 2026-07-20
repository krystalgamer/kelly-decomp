# set_stick__17ps2_joypad_deviceiii

- Address: `0x001E2288`
- Size: `0x28` (40 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released implementation writes the selected stick bytes in the target global pad-data buffer.

## Outcome

The released PS2 joypad stick setter matched exactly.
