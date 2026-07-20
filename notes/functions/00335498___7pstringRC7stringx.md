# __7pstringRC7stringx

- Address: `0x00335498`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/pstring.cpp`
- Reference source: `KS/SRC/pstring.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 90.9091 | 81.8182 | `candidate.cpp` |

### Attempt 1 notes

The released constructor forwards `target_string.c_str()` directly to
`pack_string`; a one-word `stringx` layout preserves the delay-slot data load.

Re-evaluating the identical first candidate after the exact constructor-save compiler fixup now produces an exact match; this infrastructure recheck does not consume a third source attempt.

## Outcome

The released pstring(stringx const&) constructor matched exactly after correcting the isolated compiler save order.
