# nvlReleaseMovieSource__FP14nvlMovieSource

- Address: `0x0038B128`
- Size: `0xD4` (212 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.4545 | 67.2727 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released assertions and release branches matched through all checks, but GCC tail-called the second free and reversed the final branch layout.

### Attempt 2 notes

Zero-instruction barriers after both release paths prevented sibling calls and recovered the shipped shared epilogue. The exact released body matched byte-exactly.

## Outcome

Matched the exact released movie-source assertions and allocator/free release paths, with zero-instruction barriers preserving the shipped shared epilogue.
