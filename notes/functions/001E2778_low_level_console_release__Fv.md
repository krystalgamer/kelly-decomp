# low_level_console_release__Fv

- Address: `0x001E2778`
- Size: `0xC` (12 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released function clears the word-sized global `llc_available`; a local absolute equate preserves its target address materialization.

## Outcome

The released `low_level_console_release` global clear matched exactly on the first attempt.
