# WAVE_StageAdvance__Fv

- Address: `0x00377B00`
- Size: `0x34` (52 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.0769 | 0.0 | `candidate.cpp` |
| 2 | different | 23.0769 | 0.0 | `candidate.cpp` |
| 3 | different | 78.5714 | 78.5714 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released increment/modulo/progress reset directly. EE GCC optimized away the intermediate stage store and reordered the divide/progress operations, producing 48 bytes.

### Attempt 2 notes

Expanded the operation into explicit stage and wrapped locals. The optimizer still eliminated the intermediate store and emitted the same 48-byte sequence.

### Attempt 3 notes

Made both stage globals volatile. This preserved the target operations and ordering, but forced the final stage store before the return instead of into its delay slot, growing the function to 56 bytes.

### Attempt 4 notes

The released increment/modulo/progress reset matched exactly. Matching-only volatile stores preserve the observable intermediate stage/progress writes while allowing the final normal stage store to occupy the return delay slot; they add no instructions beyond the target.

## Outcome

The released wave-stage advance matched exactly.
