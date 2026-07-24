# __tf11movieplayer

- Address: `0x001E9898`
- Size: `0x78` (120 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_movieplayer.h`
- Reference source: `KS/SRC/HWOSPS2/ps2_movieplayer.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1667 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 19.1667 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred movieplayer RTTI generation after five source-level attempts; the released singleton inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
