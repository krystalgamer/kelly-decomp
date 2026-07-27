# _$_12typeface_def

- Address: `0x0033C5D0`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.6721 | 8.7719 | `candidate.cpp` |
| 2 | different | 19.6721 | 8.7719 | `candidate.cpp` |
| 3 | different | 34.7656 | 22.9508 | `candidate.cpp` |
| 4 | different | 38.5246 | 64.9123 | `candidate.cpp` |
| 5 | different | 20.7031 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Exact released destructor body with source-faithful typeface, stringx, vector, and allocator declarations. The compiler emitted vector destruction out of line, producing only 100 bytes for the target function.

### Attempt 2 notes

Separated the vector element destruction and allocator base destruction to mirror the released STL structure. Both destructors still remained out of line, leaving the target function unchanged at 100 bytes.

### Attempt 3 notes

Expanded the compiler-generated member cleanup into source-level stringx and vector cleanup while preserving released semantics. The result was 256 bytes and differed in loop register allocation and deletion scheduling.

### Attempt 4 notes

Pinned the vector context and delayed the deleting-flag test with zero-instruction matching annotations. This reached 64.9123% instruction identity at 240 bytes, but the empty element-destruction loop still had a different shape.

### Attempt 5 notes

Added the authentic non-trivial empty inter_kern destructor and forced the vector context to remain live. Old EE GCC selected a substantially different loop and register schedule, so the bounded attempts ended without a match.

## Outcome

The exact released destructor and four source-faithful cleanup variants exhausted the five-attempt bound. Old EE GCC kept the vector destructor out of line or selected a different empty-destruction loop; the best in-function variant reached 64.9123% instruction identity without a byte match.
