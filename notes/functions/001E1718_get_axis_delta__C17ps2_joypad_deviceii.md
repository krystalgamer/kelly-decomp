# get_axis_delta__C17ps2_joypad_deviceii

- Address: `0x001E1718`
- Size: `0x78` (120 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.7188 | 25.0 | `candidate.cpp` |
| 2 | different | 75.8333 | 70.0 | `candidate.cpp` |
| 3 | different | 75.8333 | 70.0 | `candidate.cpp` |
| 4 | different | 36.7188 | 25.0 | `candidate.cpp` |
| 5 | different | 75.8333 | 70.0 | `candidate.cpp` |

## Outcome

Deferred ps2_joypad_device::get_axis_delta after five source-level attempts; the released branch shape, member offsets, calls, and arithmetic reproduced, but the target-only mtc1 conversion hazard nop did not.
