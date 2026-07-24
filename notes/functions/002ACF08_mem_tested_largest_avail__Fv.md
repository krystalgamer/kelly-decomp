# mem_tested_largest_avail__Fv

- Address: `0x002ACF08`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released descending allocation-probe loop, availability accumulation, and free path. The exact source body matched on attempt 1.

## Outcome

Matched tested largest memory availability
