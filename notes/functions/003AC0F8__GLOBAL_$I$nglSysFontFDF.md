# _GLOBAL_$I$nglSysFontFDF

- Address: `0x003AC0F8`
- Size: `0x20` (32 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/vector_common.h`
- Reference source: `NGL/PS2/vector_common.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-last-thunks-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-last-thunks-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-last-thunks-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling
call. The manual generated-symbol wrapper was removed and the target returned
to raw text.
