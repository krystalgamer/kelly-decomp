# __14vertex_context

- Address: `0x001E29B0`
- Size: `0x60` (96 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.875 | 0.0 | `candidate.cpp` |
| 2 | different | 34.0 | 4.0 | `candidate.cpp` |
| 3 | different | 81.25 | 75.0 | `candidate.cpp` |
| 4 | different | 36.0 | 4.0 | `candidate.cpp` |
| 5 | different | 29.0 | 0.0 | `candidate.cpp` |

## Outcome

Released vertex_context constructor reached an exact 18/24-instruction tail, but initial self/global/flag scheduling resisted five volatile/fixed-register candidates.
