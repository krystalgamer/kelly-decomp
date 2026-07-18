# clear_flag__t4anim1ZP6entity12anim_flags_t

- Address: `0x00120A70`
- Size: `0x14` (20 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released template complements the requested flag and ANDs it out of the halfword flags field.

## Outcome

The released `anim<entity*>::clear_flag` update matched exactly on the first attempt.
