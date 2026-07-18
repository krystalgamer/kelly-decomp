# get_in_use__C6entity

- Address: `0x00144E18`
- Size: `0xC` (12 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 2 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 3 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released accessor tests bit zero of the signed halfword flags at offset `0x7A`. EE GCC narrowed ordinary C++ forms to `lhu`; an explicit signed load preserved the target `lh` on attempt four.

## Outcome

The released `entity::get_in_use` flag test matched on attempt four after preserving the target's signed halfword load.
