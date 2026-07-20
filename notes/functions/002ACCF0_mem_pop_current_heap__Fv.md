# mem_pop_current_heap__Fv

- Address: `0x002ACCF0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper decrements `heapstackptr`, reads the indexed heap stack entry, and stores it into `currentheap` at the recovered globals.

## Outcome

The released heap-pop helper matched exactly on the first attempt.
