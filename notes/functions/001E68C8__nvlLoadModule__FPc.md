# _nvlLoadModule__FPc

- Address: `0x001E68C8`
- Size: `0xF0` (240 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.8333 | 76.6667 | `candidate-1-exact-released.cpp` |
| 2 | different | 33.75 | 26.6667 | `candidate-4-do-break-loops.cpp` |
| 3 | different | 80.8333 | 76.6667 | `candidate-5-for-retry-loops.cpp` |
| 4 | different | 81.25 | 78.3333 | `candidate-2-corrected-exact.cpp` |
| 5 | different | 20.8333 | 13.6364 | `candidate-3-array-initializer.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The corrected released module-loader source recovers exact size and retry behavior, but isolated literal relocations and loop-result scheduling remain different.
