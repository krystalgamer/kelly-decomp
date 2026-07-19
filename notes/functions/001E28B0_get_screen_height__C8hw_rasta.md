# get_screen_height__C8hw_rasta

- Address: `0x001E28B0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor delegates to NGL; retaining the integer result across a barrier prevents a sibling call.

## Outcome

The released `hw_rasta::get_screen_height` wrapper matched exactly on the first attempt.
