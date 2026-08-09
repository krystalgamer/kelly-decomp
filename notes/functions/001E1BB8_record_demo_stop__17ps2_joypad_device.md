# record_demo_stop__17ps2_joypad_device

- Address: `0x001E1BB8`
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

The released demo-log open check, conditional close, and recording flag clear
use the shared joypad and `os_file` declarations.

## Outcome

The local joypad and file layouts were removed.
