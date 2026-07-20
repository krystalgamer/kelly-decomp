# nglUnlockTexturePS2__FP10nglTexture

- Address: `0x0039CA90`
- Size: `0x34` (52 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.8462 | 0.0 | `candidate.cpp` |
| 2 | different | 17.3077 | 7.6923 | `candidate.cpp` |
| 3 | different | 16.0714 | 7.1429 | `candidate.cpp` |
| 4 | different | 65.3846 | 61.5385 | `candidate.cpp` |
| 5 | different | 16.0714 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

Used the released texture layout and Locked bitfield assignment. EE GCC emitted a 32-bit bitfield clear and sibling tail jump, producing only 20 bytes instead of the target 64-bit packed clear and framed call.

### Attempt 2 notes

Added a trailing empty barrier to preserve the relock call frame. The bitfield operation remained a short 32-bit clear, producing 40 bytes.

### Attempt 3 notes

Modeled the packed type/flags word as 64-bit and cleared bit 33. The operation shape matched, but EE GCC synthesized the mask with six instructions and produced 56 bytes.

### Attempt 4 notes

Emitted only the target four-instruction mask construction and retained the C clear/call. The instructions matched, but the volatile asm forced the `ra` save before the mask; the target saves `ra` after it.

### Attempt 5 notes

Used a fixed v1 C register and expression-tree mask construction to avoid inline assembly scheduling. EE GCC reverted to the six-instruction constant synthesis and 56-byte function.

## Outcome

Five source/layout/mask candidates could not simultaneously reproduce the target four-instruction 64-bit mask construction and delayed ra-save prologue.
