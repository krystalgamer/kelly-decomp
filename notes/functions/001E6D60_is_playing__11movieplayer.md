# is_playing__11movieplayer

- Address: `0x001E6D60`
- Size: `0x7C` (124 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released high-resolution flag path and movie status/frame bounds matched exactly with the movieplayer field offsets and NVL calls.

## Outcome

The released movie playback query matched exactly on the first attempt.
