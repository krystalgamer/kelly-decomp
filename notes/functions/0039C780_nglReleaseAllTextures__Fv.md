# nglReleaseAllTextures__Fv

- Address: `0x0039C780`
- Size: `0xA0` (160 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.625 | 5.0 | `candidate.cpp` |
| 2 | different | 31.25 | 5.0 | `candidate.cpp` |
| 3 | different | 30.625 | 5.0 | `candidate.cpp` |
| 4 | different | 75.0 | 67.5 | `candidate.cpp` |
| 5 | different | 23.2143 | 4.7619 | `candidate.cpp` |

## Outcome

Five released texture-bank purge variants reproduced the loop but not the original whole-TU register allocation and prologue scheduling.
