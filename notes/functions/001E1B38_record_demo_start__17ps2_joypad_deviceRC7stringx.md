# record_demo_start__17ps2_joypad_deviceRC7stringx

- Address: `0x001E1B38`
- Size: `0x7C` (124 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.7419 | 80.6452 | `candidate.cpp` |
| 2 | different | 61.7188 | 43.75 | `candidate.cpp` |
| 3 | different | 94.3548 | 87.0968 | `candidate.cpp` |
| 4 | different | 94.3548 | 87.0968 | `candidate.cpp` |
| 5 | different | 61.7188 | 43.75 | `candidate.cpp` |

## Outcome

Deferred ps2_joypad_device::record_demo_start after five source-level attempts; the released file open, demo header, frame-lock fallback, frame write, and recording flag reproduced at 94%, but the target global and member-address register selection did not.
