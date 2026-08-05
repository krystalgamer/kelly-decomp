# is_looping__C11beam_effect

- Address: `0x002B8490`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.5 | 20.0 | `size40-beam-core.cpp` |
| 2 | different | 32.5 | 20.0 | `size40-beam-loop-2.cpp` |
| 3 | different | 32.5 | 20.0 | `size40-beam-loop-3.cpp` |

### Attempt 1 notes

The exact released comparison produces a 36-byte function without the target
EE hazard slot between `mtc1` and `c.le.s`.

### Attempt 2 notes

A local delay and zero preserve the same optimized 36-byte comparison.

### Attempt 3 notes

Expressing the predicate as the negation of a negative-delay comparison still
produces 36 bytes and changes the comparison opcode.

## Outcome

Across three ordinary released-source forms, the compiler omits the target
FPU hazard nop. The instruction-assembly implementation was removed and the
function was deferred.
