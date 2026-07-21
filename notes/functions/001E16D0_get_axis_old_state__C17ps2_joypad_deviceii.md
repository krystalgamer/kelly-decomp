# get_axis_old_state__C17ps2_joypad_deviceii

- Address: `0x001E16D0`
- Size: `0x44` (68 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.0588 | 5.8824 | `candidate.cpp` |
| 2 | different | 36.1111 | 16.6667 | `candidate.cpp` |
| 3 | different | 73.5294 | 70.5882 | `candidate.cpp` |
| 4 | different | 95.5882 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released control flow first. After comparing its branch scheduling, expressed the normal-axis path first and staged the disconnect result; the final alias resolves the authentic overload call address and matches exactly.

## Outcome

The released previous-state wrapper matches with its disconnect sentinel and previous input buffer.
