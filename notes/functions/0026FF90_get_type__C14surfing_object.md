# get_type__C14surfing_object

- Address: `0x0026FF90`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released getter returns `my_type` from offset `0x2E0`.

## Outcome

The released `surfing_object::get_type` field getter matched exactly on the first attempt.
