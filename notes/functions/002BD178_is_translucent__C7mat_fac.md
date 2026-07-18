# is_translucent__C7mat_fac

- Address: `0x002BD178`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released NGL path reports translucent modes other than opaque (`0`) and punchthrough (`1`) using the mode at offset `0x38`.

## Outcome

The released `mat_fac::is_translucent` range predicate matched exactly on the first attempt.
