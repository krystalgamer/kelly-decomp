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

The released digital-button bit clear uses the shared joypad declaration and
its static `rdata` buffer; the unused state parameter is preserved.

## Outcome

The local joypad declaration was removed.
