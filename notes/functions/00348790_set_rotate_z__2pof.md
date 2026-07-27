# set_rotate_z__2pof

- Address: `0x00348790`
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

Reused the validated po/matrix context from rotate_x/rotate_y and compiled the exact released Z-axis identity assignment, sine/cosine call, and four matrix writes. The first candidate matched all 232 bytes and 58 instructions.

### Attempt 2 notes

Revalidated the exact released Z rotation against the already-built canonical po context, further amortizing the one-time shared-header rebuild.

## Outcome

Matched the exact released po Z-rotation by reusing the canonical po algebra and sine/cosine context shared with the adjacent X/Y rotations.
