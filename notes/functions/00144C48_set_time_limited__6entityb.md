# set_time_limited__6entityb

- Address: `0x00144C48`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter toggles extended flag bit 0x10000 at offset 0x198; the direct branch reproduces both likely paths.

## Outcome

The released `entity::set_time_limited` setter matched exactly on the first attempt.
