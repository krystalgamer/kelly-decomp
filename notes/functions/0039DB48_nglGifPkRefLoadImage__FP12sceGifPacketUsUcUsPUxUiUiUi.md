# nglGifPkRefLoadImage__FP12sceGifPacketUsUcUsPUxUiUiUi

- Address: `0x0039DB48`
- Size: `0xF4` (244 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.3607 | 96.7213 | `candidate.cpp` |

### Attempt 1 notes

Exact released `nglGifPkRefLoadImage` body with the authentic PS2 DMA/GIF/GS macros and SDK integer types. It emitted the exact 244-byte packet construction; the sole difference is the two-instruction materialization chosen for the `SCE_GIF_SET_TAG(3, ..., 1)` 64-bit constant.

## Outcome

Exact released GIF upload packet differed only in 64-bit constant materialization.
