# nglSetRenderTarget__FP10nglTextureb

- Address: `0x00398528`
- Size: `0x28` (40 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal scene/texture layouts preserve the render-target fields and the 64-bit PS2 render-target flag.

## Outcome

The released `nglSetRenderTarget` implementation matched exactly.
