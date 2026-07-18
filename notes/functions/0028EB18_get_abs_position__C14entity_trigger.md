# get_abs_position__C14entity_trigger

- Address: `0x0028EB18`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor loads `ent` at `0x38`, its position holder at `0x50`, and returns position at holder offset `0x30`.

## Outcome

The released `entity_trigger::get_abs_position` nested address calculation matched exactly on the first attempt.
