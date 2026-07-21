# __7os_file

- Address: `0x001DFC58`
- Size: `0x44` (68 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_file.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_file.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.5882 | 100.0 | `candidate.cpp` |
| 2 | different | 95.5882 | 94.1176 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Attempt one used the exact released constructor but left the stringx call relocatable. Moving the absolute symbol alias before the emitted function resolves the released call address without changing behavior and matches exactly.

## Outcome

The released os_file default constructor matches exactly with the authentic stringx member and field offsets.
