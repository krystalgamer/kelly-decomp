# get_original_width__C7mat_faci5map_e

- Address: `0x002BD198`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active NGL path only tests the material map pointer; spelling the null early return preserves the target branch direction.

## Outcome

The released `mat_fac::get_original_width` NGL accessor matched exactly on the first attempt.
