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

The released heap-array lookup uses the shared 108-byte `Heap` declaration and
inline `GetLargestFree`.

## Outcome

The local heap declaration was removed.
