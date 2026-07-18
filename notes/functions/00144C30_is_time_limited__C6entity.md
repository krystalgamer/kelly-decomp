# is_time_limited__C6entity

- Address: `0x00144C30`
- Size: `0x14` (20 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 0.0 | `candidate.cpp` |
| 2 | different | 15.0 | 0.0 | `candidate.cpp` |
| 3 | different | 25.0 | 20.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released accessor tests `EFLAG_EXT_TIME_LIMITED` (`0x10000`) in `ext_flags` at offset `0x198`. EE GCC repeatedly narrowed the C++ expression, so an explicit load/mask sequence preserved the target on attempt four.

## Outcome

The released `entity::is_time_limited` predicate matched on attempt four after preserving its full-word mask sequence.
