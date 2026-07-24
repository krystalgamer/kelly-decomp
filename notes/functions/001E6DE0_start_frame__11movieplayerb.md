# start_frame__11movieplayerb

- Address: `0x001E6DE0`
- Size: `0x6C` (108 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.8148 | 3.7037 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 64.6552 | 51.7241 | `candidate.cpp` |
| 4 | different | 67.8571 | 53.5714 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the hi-res/list-init paths, movie-started gate, volume warmup counter, and MPEG volume choice. Inverting the source comparison reproduced the shared volume call on attempt 5.

## Outcome

Matched movie player frame start
