# get_random_ifl_frame_boost__C6entity

- Address: `0x00134D48`
- Size: `0x38` (56 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released counter increment and masked three-times-entity-ID table lookup matched exactly with the entity ID at offset 0x80.

## Outcome

The released random IFL frame boost getter matched exactly on the first attempt.
