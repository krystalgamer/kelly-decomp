# SetBlockSentry__4HeapP12MemBlockInfo

- Address: `0x002AB678`
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

With heap assertions and sentries disabled, the released sentry setter is empty.

## Outcome

The configuration-empty `Heap::SetBlockSentry` method matched exactly on the first attempt.
