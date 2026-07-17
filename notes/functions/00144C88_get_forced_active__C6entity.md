# get_forced_active__C6entity

- Address: `0x00144C88`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base entity returns `FORCE_ACTIVE_NONE`, whose enum value is zero. The
enum-returning method matched the target zero result immediately.

## Outcome

The base entity returns the zero-valued FORCE_ACTIVE_NONE enum. The first candidate matched exactly and preserved the byte-identical integrated ROM.
