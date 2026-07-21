# set_button_d__17ps2_joypad_deviceib

- Address: `0x001E2218`
- Size: `0x3C` (60 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released digital-button bit clear matched exactly with the original rdata index split and recovered absolute rdata buffer address; the unused state parameter is preserved.

## Outcome

The released digital button setter exactly matches the rdata byte selection and requested-bit clear with the recovered buffer address.
