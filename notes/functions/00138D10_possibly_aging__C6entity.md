# possibly_aging__C6entity

- Address: `0x00138D10`
- Size: `0x7C` (124 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.1613 | 0.0 | `candidate.cpp` |
| 2 | different | 31.4516 | 6.4516 | `candidate.cpp` |
| 3 | different | 62.0968 | 41.9355 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released short-circuit animation test matched after expressing the visual_rep calls as source-faithful inline member methods, reproducing the saved boolean result register.

## Outcome

The released entity aging eligibility test matched exactly on the fourth attempt.
