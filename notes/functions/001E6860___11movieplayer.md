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
| 1 | matched | 100.0 | 100.0 | `size44-movie-menu-core.cpp` |

### Attempt 1 notes

The shared singleton/movieplayer layout and relocatable generated vtable
symbol reproduce the released null/false initialization.

## Outcome

The manual vtable assignment was removed.
