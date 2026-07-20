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
| 1 | different | 55.0 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Spelling the invalid mip level as the early return caused EE GCC to invert the target branch; the valid case must be the fallthrough path.

### Attempt 2 notes

Minimal TIM2 and texture layouts preserve the mip-count byte, 16-byte image entries, and data pointer at 0x90.

## Outcome

The released `nglTim2GetImage` implementation matched exactly.
