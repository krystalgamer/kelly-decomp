# scan_devices__9input_mgr

- Address: `0x001E2548`
- Size: `0x84` (132 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 53.0303 | 30.303 | `candidate.cpp` |
| 3 | different | 47.0588 | 35.2941 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 84.0909 | 78.7879 | `candidate.cpp` |

## Outcome

Deferred the released PS2 input-device scan after five source-level attempts; the device registration logic was reproduced, but the original global reload and register scheduling did not match exactly.
