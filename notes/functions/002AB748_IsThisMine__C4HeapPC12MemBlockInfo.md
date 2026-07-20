# IsThisMine__C4HeapPC12MemBlockInfo

- Address: `0x002AB748`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal layouts preserve the heap id and block signature/id fields used by the released ownership predicate.

## Outcome

The released `Heap::IsThisMine` predicate matched exactly.
