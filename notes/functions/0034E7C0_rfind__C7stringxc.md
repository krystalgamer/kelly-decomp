# rfind__C7stringxc

- Address: `0x0034E7C0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal `stringx`/`string_buf` layout preserves `my_buf` at 0x4, `char_length` at 0x8, and the released forwarded position `length - 1`.

## Outcome

The released `stringx::rfind(char)` wrapper matched exactly on the first attempt.
