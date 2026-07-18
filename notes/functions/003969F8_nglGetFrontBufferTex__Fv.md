# nglGetFrontBufferTex__Fv

- Address: `0x003969F8`
- Size: `0xC` (12 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns the front-buffer texture address through adjusted-high materialization.

## Outcome

The released `nglGetFrontBufferTex` constant address matched exactly on the first attempt.
