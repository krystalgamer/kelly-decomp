# nglSetQuadTex__FP7nglQuadP10nglTexture

- Address: `0x003A69A0`
- Size: `0x8` (8 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `Tex` at offset `0x60`.

## Outcome

The released `nglSetQuadTex` pointer setter matched exactly on the first attempt.
