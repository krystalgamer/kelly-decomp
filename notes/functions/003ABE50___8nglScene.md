# __8nglScene

- Address: `0x003ABE50`
- Size: `0xAC` (172 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2_internal.h`
- Reference source: `NGL/PS2/ngl_ps2_internal.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.907 | 0.0 | `candidate.cpp` |
| 2 | different | 27.907 | 0.0 | `candidate.cpp` |
| 3 | different | 28.4884 | 0.0 | `candidate.cpp` |
| 4 | different | 43.6047 | 16.6667 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five exact released-layout scene constructor variants could not reproduce the original whole-translation-unit empty-vector loop scheduling.
