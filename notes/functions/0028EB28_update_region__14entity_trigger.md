# update_region__14entity_trigger

- Address: `0x0028EB28`
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

The released entity-trigger implementation is gated by disabled `ECULL`.

## Outcome

The configuration-empty `entity_trigger::update_region` method matched exactly on the first attempt.
