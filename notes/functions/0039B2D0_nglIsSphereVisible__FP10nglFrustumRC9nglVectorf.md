# nglIsSphereVisible__FP10nglFrustumRC9nglVectorf

- Address: `0x0039B2D0`
- Size: `0xE0` (224 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.9821 | 94.6429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate-3-consolidated.cpp` |

### Attempt 1 notes

Used the exact released sphere visibility body and authentic frustum/vector declarations. All ABI and first-five plane checks matched, but EE GCC inverted the final comparison and delay-slot boolean selection.

### Attempt 2 notes

Added a zero-instruction compiler barrier before the final true return, preserving the released early-false structure and matching all 224 bytes and 56 instructions.

### Attempt 3 notes

Revalidated the exact result after consolidating the released frustum, plane, and distance declarations into ngl_ps2_shared.h. The candidate remained byte-exact.

## Outcome

Matched the released six-plane sphere visibility test after consolidating the authentic NGL frustum declarations and using a documented zero-instruction barrier to preserve the target final early-false branch schedule.
