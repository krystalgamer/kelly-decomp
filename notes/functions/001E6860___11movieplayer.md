# __11movieplayer

- Address: `0x001E6860`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | different | 90.9091 | 63.6364 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The second source shape improved part of the layout or call form but retained a distinct target scheduling mismatch.

### Attempt 3 notes

A minimal layout preserves the movieplayer vtable and released null/false initialization fields.

## Outcome

The released `movieplayer` constructor matched exactly.
