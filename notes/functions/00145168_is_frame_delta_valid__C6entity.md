# is_frame_delta_valid__C6entity

- Address: `0x00145168`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate checks the movement-info pointer at `0x150` and its word-sized current-frame flag at offset `0x0`.

## Outcome

The released `entity::is_frame_delta_valid` short-circuit predicate matched exactly on the first attempt.
