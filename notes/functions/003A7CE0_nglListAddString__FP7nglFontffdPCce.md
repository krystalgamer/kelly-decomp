# nglListAddString__FP7nglFontffdPCce

- Address: `0x003A7CE0`
- Size: `0xA4` (164 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 31.0976 | 19.5122 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 26.2195 | 9.7561 | `candidate.cpp` |

## Outcome

Five released variadic wrapper variants could not reproduce the mixed GPR and FPR va_list save area.
