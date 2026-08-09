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
| 1 | matched | 100.0 | 100.0 | `size44-string-stash-core.cpp` |

### Attempt 1 notes

The shared `stringx` and buffer declarations preserve `my_buf`, `char_length`,
and the forwarded position `length - 1`.

## Outcome

The local layouts were removed.
