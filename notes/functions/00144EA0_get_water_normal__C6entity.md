# get_water_normal__C6entity

- Address: `0x00144EA0`
- Size: `0xC` (12 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base accessor returns `ZEROVEC` through linker-style `lui`/`addiu` address materialization.

## Outcome

The released `entity::get_water_normal` constant reference matched exactly on the first attempt.
