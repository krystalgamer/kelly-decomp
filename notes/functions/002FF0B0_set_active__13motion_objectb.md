# set_active__13motion_objectb

- Address: `0x002FF0B0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mobject.h`
- Reference source: `KS/SRC/mobject.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the word-sized `active` flag at offset `0x0`.

## Outcome

The released `motion_object::set_active` setter matched exactly on the first attempt.
