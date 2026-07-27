# set_rotate_x__2pof

- Address: `0x003485C0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-canonical.cpp` |

### Attempt 1 notes

Compiled the exact released identity-matrix assignment, fast sine/cosine call, and four X-axis matrix element writes with source-faithful vector4d/matrix4x4/po declarations. The first candidate matched all 232 bytes and 58 instructions.

### Attempt 2 notes

Revalidated the exact released rotation against the canonical po/vector/matrix declarations. The 45-job dependency rebuild completed in 42 seconds, passed the ROM gate, and is immediately amortized by rotate_y, rotate_z, and add_increment in the same shared context.

## Outcome

Matched the exact released po X-rotation after extending the canonical po algebra and shared sine/cosine declarations. The 45-job dependency rebuild completed in 42 seconds and will be reused immediately by adjacent po functions.
