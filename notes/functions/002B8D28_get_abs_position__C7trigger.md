# get_abs_position__C7trigger

- Address: `0x002B8D28`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.h`
- Reference source: `KS/SRC/trigger.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base accessor returns `ZEROVEC` through a local absolute equate.

## Outcome

The released `trigger::get_abs_position` constant reference matched exactly on the first attempt.
