# _extract__8filespecRC7stringx

- Address: `0x00336BD0`
- Size: `0x17C` (380 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/filespec.cpp`
- Reference source: `KS/SRC/filespec.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released filespec::_extract body with only the released global.h/filespec.h declarations. The harness compile failed because those headers are not on its include path; per first-pass instructions, no retry or variant was attempted.

## Outcome

Exact released-source first pass for filespec extraction did not match.
