# set_in_use__6entityb

- Address: `0x00144E28`
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

The released setter toggles miscellaneous flag bit 0x10000 at offset 0x78; the direct branch reproduces both likely paths.

## Outcome

The released `entity::set_in_use` setter matched exactly on the first attempt.
