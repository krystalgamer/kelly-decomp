# nglTim2GetImage__FP10nglTexturei

- Address: `0x0039F8B0`
- Size: `0x28` (40 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-platform-final.cpp` |

## Outcome

The shared TIM2 and texture layouts naturally preserve the mip-count byte,
16-byte image entries, and data pointer at 0x90.
