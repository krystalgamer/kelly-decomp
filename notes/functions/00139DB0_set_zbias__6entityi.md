# set_zbias__6entityi

- Address: `0x00139DB0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8571 | 14.2857 | `candidate.cpp` |
| 2 | different | 32.1429 | 14.2857 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 60.7143 | 57.1429 | `candidate.cpp` |
| 5 | different | 60.7143 | 57.1429 | `candidate.cpp` |

### Attempt 1 notes

The source-faithful cast and assignments emitted the right operations, but this
compiler omitted the target's required `nop` between `mtc1` and `cvt.s.w`.

### Attempt 2 notes

An explicit conversion asm block inserted the FPU hazard nop, but the compiler
moved the boolean calculation before the block and reversed the final stores.

### Attempt 3 notes

Trying to make the integer input read-write inside the conversion asm exceeded
the old compiler's register constraints and failed compilation.

### Attempt 4 notes

Two ordered asm blocks produced the exact conversion prefix, but EE GCC stored
`zbias` before computing and storing `usezbias`.

### Attempt 5 notes

Reversing the equivalent source assignments did not change the compiler's
store schedule. The best candidate retained four of seven matching instructions.

## Outcome

Five candidates explored the source-faithful integer-to-float conversion, explicit EE FPU hazard nop insertion, register dependencies, and both assignment orders. The target conversion prefix was recovered, but the compiler continued to reverse the final bool/float store schedule, so the function remains assembly.
