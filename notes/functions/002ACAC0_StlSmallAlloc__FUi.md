# StlSmallAlloc__FUi

- Address: `0x002ACAC0`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released allocator returns the old static bump pointer and advances it by the requested byte count.

## Outcome

The released `StlSmallAlloc` pointer exchange matched exactly on the first attempt.
