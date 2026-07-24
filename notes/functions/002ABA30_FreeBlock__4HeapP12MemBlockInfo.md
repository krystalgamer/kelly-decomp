# FreeBlock__4HeapP12MemBlockInfo

- Address: `0x002ABA30`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.875 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released heap block links, MoveUsedToFree call, next/previous coalescing conditions, and MergeBlock calls. Preventing the final merge tail call matched on attempt 2.

## Outcome

Matched heap block freeing
