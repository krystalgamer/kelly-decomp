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

The released function uses the shared texture and instance-bank declarations
to search by `FileName` and increment the reference count.

## Outcome

The local texture, fixed-string, and bank declarations were removed.
