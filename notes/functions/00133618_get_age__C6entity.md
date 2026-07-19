# get_age__C6entity

- Address: `0x00133618`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor forwards to `frame_time_info.get_age()` on the embedded object at offset `0x1CC`; a barrier preserves the call wrapper.

## Outcome

The released `entity::get_age` call wrapper matched exactly on the first attempt.
