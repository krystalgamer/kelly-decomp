# nglAddTextureRef__FP10nglTexture

- Address: `0x0039C710`
- Size: `0x38` (56 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released function searches the texture instance bank by FileName and increments the found instance reference count. Recovered texture, bank, and instance offsets match exactly.

## Outcome

The original texture-bank lookup and conditional reference-count increment match exactly.
