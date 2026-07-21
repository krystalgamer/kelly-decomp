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

The released demo-log open check, conditional os_file close, and recording flag clear matched exactly with recovered ps2_joypad_device and os_file offsets.

## Outcome

The released demo recording stop exactly matches the open check, conditional file close, and recording flag clear with recovered layouts.
