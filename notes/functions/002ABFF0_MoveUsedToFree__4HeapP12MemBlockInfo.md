# MoveUsedToFree__4HeapP12MemBlockInfo

- Address: `0x002ABFF0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.625 | 22.9167 | `candidate.cpp` |
| 2 | different | 52.7778 | 37.7778 | `candidate.cpp` |
| 3 | different | 40.625 | 22.9167 | `candidate.cpp` |
| 4 | different | 43.0 | 26.0 | `candidate.cpp` |
| 5 | different | 40.625 | 22.9167 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used shared source-faithful Heap, MemBlockInfo, and packed flag declarations; all list updates matched, but EE GCC peeled the first previous-free scan and emitted three extra instructions.

### Attempt 2 notes

An explicit loop label prevented peeling and reduced size below target, but generated two branches where the original used one branch-likely loop.

### Attempt 3 notes

An empty source scheduling boundary before the released while loop retained the peeled form.

### Attempt 4 notes

Splitting the null and used-flag conditions enlarged the scan further.

### Attempt 5 notes

Moving the released scan update into a for-loop expression returned to the peeled schedule. No local heap or block layout was retained.

## Outcome

Deferred heap used-to-free movement after five source-level attempts; exact shared declarations could not reproduce the original first-loop branch-likely schedule.
