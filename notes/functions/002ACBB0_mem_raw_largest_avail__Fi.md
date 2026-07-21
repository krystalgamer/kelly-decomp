# mem_raw_largest_avail__Fi

- Address: `0x002ACBB0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released heap-array lookup and inline GetLargestFree check/field return match exactly with the 108-byte Heap layout.

## Outcome

The released heap lookup and inline largest-free query match exactly.
