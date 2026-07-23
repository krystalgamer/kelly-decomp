# nglReleaseTexture__FP10nglTexture

- Address: `0x0039C820`
- Size: `0x58` (88 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.6522 | 60.8696 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released nglReleaseTexture body, packed System flag bit/64-bit chunk, FileName offset, texture bank address/Delete helper, and destroy helper. A non-emitting post-destroy continuation prevented tail calling and matched on attempt 2.

## Outcome

Matched released ngl texture release
