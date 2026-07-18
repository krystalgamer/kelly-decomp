# low_level_console_init__Fv

- Address: `0x001E2768`
- Size: `0x10` (16 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released initializer sets the word-sized console-availability global through a local absolute equate.

## Outcome

The released `low_level_console_init` global set matched exactly on the first attempt.
