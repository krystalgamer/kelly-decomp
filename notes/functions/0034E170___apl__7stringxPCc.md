# __apl__7stringxPCc

- Address: `0x0034E170`
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

The released append operator forwards the C string to `append` with the default `-1` length and returns `*this`.

## Outcome

The released `stringx::operator+=(char const*)` wrapper matched exactly on the first attempt.
