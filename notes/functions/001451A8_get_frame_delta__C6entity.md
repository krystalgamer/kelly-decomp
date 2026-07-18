# get_frame_delta__C6entity

- Address: `0x001451A8`
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

The released accessor loads `mi` at offset `0x150` and returns `frame_delta` at movement-info offset `0x10`.

## Outcome

The released `entity::get_frame_delta` nested address calculation matched exactly on the first attempt.
