# set_zbias__6entityi

- Address: `0x00139DB0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8571 | 14.2857 | `candidate.cpp` |
| 2 | different | 9.375 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released C++ setter was retained as the semantic reference, but EE GCC omitted the shipped integer-to-float hazard nop and reversed the independent stores. A documented register-bound asm sequence is therefore required for the conversion, boolean store, and hazard spacing; the final float store remains ordinary C++ and occupies the return delay slot.

## Outcome

Matched entity zbias setter with documented EE scheduling asm.
