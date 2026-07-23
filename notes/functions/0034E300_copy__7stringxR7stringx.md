# copy__7stringxR7stringx

- Address: `0x0034E300`
- Size: `0x58` (88 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released stringx::copy body, stringx/string_buf layouts, release_buffer, refcount increment, cache helper, and chars refresh. It matched byte-exactly.

## Outcome

Matched released stringx copy helper
