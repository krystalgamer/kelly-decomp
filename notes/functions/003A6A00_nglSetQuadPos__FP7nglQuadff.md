# nglSetQuadPos__FP7nglQuadff

- Address: `0x003A6A00`
- Size: `0x64` (100 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 14.0 | 0.0 | `candidate.cpp` |
| 3 | different | 38.0 | 28.0 | `candidate.cpp` |
| 4 | different | 14.0 | 0.0 | `candidate.cpp` |
| 5 | different | 41.0714 | 25.0 | `candidate.cpp` |

## Outcome

Released quad positioning requires several floating conversion pipeline nops; five source-level candidates could not reproduce them without prohibited instruction assembly.
