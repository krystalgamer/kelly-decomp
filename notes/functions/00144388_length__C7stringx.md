# length__C7stringx

- Address: `0x00144388`
- Size: `0xC` (12 bytes)
- Object: `game/files_entity`
- Debug source: `stringx.h`
- Reference source: `KS/SRC/stringx.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `length()` forwards to `size()`, loading `my_buf` at offset `0x4` and `char_length` at buffer offset `0x8`.

## Outcome

The released `stringx::length` nested load matched exactly on the first attempt.
