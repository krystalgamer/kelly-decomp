# __as__13hw_rasta_vertRC13hw_rasta_vert

- Address: `0x002FEAF0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_misc2`
- Debug source: `hwosps2/ps2_rasterize.h`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.5833 | 5.0 | `candidate.cpp` |
| 2 | different | 29.5833 | 5.0 | `candidate.cpp` |
| 3 | different | 32.3276 | 1.7241 | `candidate.cpp` |
| 4 | different | 27.8226 | 4.8387 | `candidate.cpp` |
| 5 | different | 29.5833 | 5.0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The complete released hw_rasta_vert layout and member assignments are recovered, but the compiler hoists later array pointers and chooses different generated copy-loop scheduling than the target implicit assignment operator.
