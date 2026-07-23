# __7stringx

- Address: `0x0034D3E0`
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

Read the exact released default stringx constructor, initialization flag/helper, empty literal, acquire_buffer ABI, and string_buf data offset. It matched byte-exactly.

## Outcome

Matched released default stringx constructor
