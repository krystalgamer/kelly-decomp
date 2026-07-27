# mem_error__FUibPCci

- Address: `0x002AC308`
- Size: `0x130` (304 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.8947 | 81.5789 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Tested the exact released `mem_error(size_t, bool, const char *, int)` body
with minimal authentic `Heap` layout, allocator globals, and called-function
declarations bound to target addresses. The 304-byte candidate differed:
82.8947% byte score (252/304) and 81.5789% instruction score (62/76).
Per first-pass rules, no additional candidate was prepared.

## Outcome

The exact released memory-error handler differed from the target; the sole attempt scored 82.8947%.
