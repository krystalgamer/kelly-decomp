# nglVif1IntCreateTextureBlock__Fv

- Address: `0x0039F660`
- Size: `0x88` (136 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.3514 | 67.5676 | `candidate.cpp` |
| 2 | different | 36.1842 | 31.5789 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released VIF texture-block creation matched after ordering zero-field stores and blocking the final GIF packet reset tail call.

## Outcome

The released VIF texture-block creation matched exactly on the third attempt.
