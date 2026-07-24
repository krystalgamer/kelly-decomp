# nglVif1EndQuads__FRPUi

- Address: `0x003A6150`
- Size: `0x78` (120 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.875 | 9.375 | `candidate.cpp` |
| 2 | different | 22.7941 | 5.8824 | `candidate.cpp` |
| 3 | different | 14.8438 | 0.0 | `candidate.cpp` |
| 4 | different | 21.875 | 3.125 | `candidate.cpp` |
| 5 | different | 22.7941 | 5.8824 | `candidate.cpp` |

## Outcome

Deferred nglVif1EndQuads after five source-level attempts; the released DMA alignment, count-tag construction, tag clearing, and VIF flush reproduced, but the target inline global-address and packet-update scheduling did not.
