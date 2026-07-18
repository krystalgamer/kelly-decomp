# get_abs_position__C13point_trigger

- Address: `0x0028DEE0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns a reference to `position` at offset `0x38`.

## Outcome

The released `point_trigger::get_abs_position` address calculation matched exactly on the first attempt.
