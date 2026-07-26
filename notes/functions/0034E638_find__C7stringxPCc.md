# find__C7stringxPCc

- Address: `0x0034E638`
- Size: `0xBC` (188 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released nested substring scan matched on the first attempt after
reusing the source-faithful shared `stringx` and `string_buf` declaration.

## Outcome

Matched the released string substring search with the shared string layout.
