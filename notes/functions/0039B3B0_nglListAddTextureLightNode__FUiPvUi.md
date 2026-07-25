# nglListAddTextureLightNode__FUiPvUi

- Address: `0x0039B3B0`
- Size: `0xA0` (160 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.75 | 60.0 | `candidate.cpp` |
| 2 | different | 39.881 | 21.4286 | `candidate.cpp` |
| 3 | different | 47.561 | 26.8293 | `candidate.cpp` |
| 4 | different | 85.625 | 67.5 | `candidate.cpp` |
| 5 | different | 86.875 | 70.0 | `candidate.cpp` |

## Outcome

Five released texture-light insertion variants reproduced the list linking but not the original register and allocator scheduling.
