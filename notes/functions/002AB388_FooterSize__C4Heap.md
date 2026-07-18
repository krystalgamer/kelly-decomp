# FooterSize__C4Heap

- Address: `0x002AB388`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With heap sentries disabled, the released footer size is zero.

## Outcome

The released zero `Heap::FooterSize` result matched exactly on the first attempt.
