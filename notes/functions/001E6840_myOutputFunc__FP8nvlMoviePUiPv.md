# myOutputFunc__FP8nvlMoviePUiPv

- Address: `0x001E6840`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal NGL texture layout preserves the halfword width/height fields at offsets 8 and 10 and the data pointer at 0x20.

## Outcome

The released local myOutputFunc movie texture callback matched exactly on the first attempt.
