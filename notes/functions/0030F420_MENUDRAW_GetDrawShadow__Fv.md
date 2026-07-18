# MENUDRAW_GetDrawShadow__Fv

- Address: `0x0030F420`
- Size: `0x10` (16 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor tests the shadow-draw global through a local absolute equate.

## Outcome

The released `MENUDRAW_GetDrawShadow` global predicate matched exactly on the first attempt.
