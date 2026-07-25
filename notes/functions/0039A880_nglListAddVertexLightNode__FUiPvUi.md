# nglListAddVertexLightNode__FUiPvUi

- Address: `0x0039A880`
- Size: `0xA0` (160 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.625 | 37.5 | `candidate.cpp` |
| 2 | different | 67.5 | 47.5 | `candidate.cpp` |
| 3 | different | 51.2195 | 31.7073 | `candidate.cpp` |
| 4 | different | 93.125 | 92.5 | `candidate.cpp` |
| 5 | different | 88.125 | 82.5 | `candidate.cpp` |

## Outcome

Five released light-list insertion variants reproduced the full loop; the best differed only in allocator prologue scheduling.
