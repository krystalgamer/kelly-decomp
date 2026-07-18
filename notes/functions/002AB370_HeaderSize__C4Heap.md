# HeaderSize__C4Heap

- Address: `0x002AB370`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method rounds the 28-byte block header up to `minalloc` from offset `0x24`.

## Outcome

The released `Heap::HeaderSize` rounding expression matched exactly on the first attempt.
