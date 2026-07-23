# AllocateBlock__4HeapP12MemBlockInfoUiUiUiPCci

- Address: `0x002AB9D8`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 81.8182 | `candidate.cpp` |
| 2 | different | 86.3636 | 81.8182 | `candidate.cpp` |
| 3 | different | 86.3636 | 81.8182 | `candidate.cpp` |
| 4 | different | 73.8636 | 59.0909 | `candidate.cpp` |
| 5 | different | 86.3636 | 81.8182 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released final-build AllocateBlock body, fields, and AllocSplit/MoveFreeToUsed/HeaderSize helpers. Only s0/s1/ra save and first-call scheduling differed (86.36%).

### Attempt 2 notes

Kept an explicit Heap alias for all helper/field accesses. Code generation was unchanged.

### Attempt 3 notes

Reconstructed the method as an extern-C old-mangling alias over an exact layout. The same schedule remained.

### Attempt 4 notes

Constrained the returned block to s1 after AllocSplit. This changed call/result scheduling and regressed.

### Attempt 5 notes

Released the fixed result while retaining the source-faithful alias and explicit return cast. The 86.36% prologue schedule remained.

## Outcome

Released Heap::AllocateBlock remained blocked by an equivalent callee-save and first-call schedule after five source-level attempts.
