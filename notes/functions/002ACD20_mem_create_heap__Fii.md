# mem_create_heap__Fii

- Address: `0x002ACD20`
- Size: `0xF8` (248 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.0968 | 83.871 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Tested the released `mem_create_heap(int, int)` body with BUILD_FINAL-only
assert/debug code omitted, authentic `Heap` layout/method declarations, and
exact allocator globals/helper/string addresses. The 248-byte candidate was
different: 87.0968% byte score (216/248) and 83.871% instruction score
(52/62). Per first-pass rules, no second candidate was prepared.

## Outcome

Exact released mem_create_heap source differed from the target; preserved attempt 1 for the later Sol pass.
