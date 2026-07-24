# Deallocate__4HeapPv

- Address: `0x002AB680`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released Heap deallocation flow, header calculation, ownership check, stats flag, free path, and warning path. The exact source-level flow matched on attempt 1.

## Outcome

Matched heap deallocation
