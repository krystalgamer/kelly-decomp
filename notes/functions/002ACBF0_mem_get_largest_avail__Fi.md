# mem_get_largest_avail__Fi

- Address: `0x002ACBF0`
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

The released accessor subtracts the reserved 128-byte header/footer allowance
from the raw result and naturally retains the target call frame.

## Outcome

The exact released wrapper matches without a compiler barrier.
