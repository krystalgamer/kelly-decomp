# nglSetTVMode__FUi

- Address: `0x00395E48`
- Size: `0xA4` (164 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.4146 | 0.0 | `candidate.cpp` |
| 2 | different | 71.9512 | 58.5366 | `candidate.cpp` |
| 3 | different | 16.4634 | 7.3171 | `candidate.cpp` |
| 4 | different | 50.0 | 39.0244 | `candidate.cpp` |
| 5 | different | 42.0732 | 34.1463 | `candidate.cpp` |

## Outcome

Five released TV-mode variants reproduced dimensions and viewport setup but not whole-TU global register scheduling.
