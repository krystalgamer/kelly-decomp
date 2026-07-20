# get_detonate_position__C6entity

- Address: `0x00145228`
- Size: `0x28` (40 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.0 | 10.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The POD vector return used a 64-bit aggregate copy instead of the target scalar copy constructor.

### Attempt 2 notes

Minimal layouts preserve the holder pointer at 0x50 and its position at relative offset 0x30.

## Outcome

The released `entity::get_detonate_position` accessor matched exactly.
