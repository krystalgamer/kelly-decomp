# has_texture__C7mat_fac

- Address: `0x002BD188`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target predicate tests the material pointer at offset `0x4` for non-null.

## Outcome

The target `mat_fac::has_texture` pointer predicate matched exactly on the first attempt.
