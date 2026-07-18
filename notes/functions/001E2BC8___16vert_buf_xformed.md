# __16vert_buf_xformed

- Address: `0x001E2BC8`
- Size: `0x18` (24 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target constructor clears four words at offsets `0x0` through `0xC` and returns `this`.

## Outcome

The target `vert_buf_xformed` constructor matched exactly on the first attempt.
