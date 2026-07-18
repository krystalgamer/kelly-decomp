# terrain_position__C6entity

- Address: `0x001450E0`
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

The released accessor forwards to absolute position: holder pointer at `0x50`, position at holder offset `0x30`.

## Outcome

The released `entity::terrain_position` nested address calculation matched exactly on the first attempt.
