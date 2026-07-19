# mem_set_current_heap__Fi

- Address: `0x002ACCA0`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The reconstructed heap stride is 108 bytes and the target globals preserve the indexed pointer assignment.

## Outcome

The released `mem_set_current_heap` setter matched exactly.
