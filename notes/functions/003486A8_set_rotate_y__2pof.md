# set_rotate_y__2pof

- Address: `0x003486A8`
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

Reused the validated po/matrix context from set_rotate_x and compiled the exact released Y-axis identity assignment, sine/cosine call, and four matrix writes. The first candidate matched all 232 bytes and 58 instructions.

### Attempt 2 notes

Revalidated the exact released Y rotation against the already-built canonical po context; this immediately reuses and amortizes the prior shared-header rebuild.

## Outcome

Matched the exact released po Y-rotation by immediately reusing the canonical po algebra and sine/cosine context introduced for the adjacent X-rotation.
