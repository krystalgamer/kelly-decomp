# send_texture__8hw_rastaP10hw_texturei

- Address: `0x001E28E8`
- Size: `0x8` (8 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released PS2 texture submission body is disabled by `#if 0`.

## Outcome

The released empty `hw_rasta::send_texture` method matched exactly on the first attempt.
