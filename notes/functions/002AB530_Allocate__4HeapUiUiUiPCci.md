# Allocate__4HeapUiUiUiPCci

- Address: `0x002AB530`
- Size: `0xF4` (244 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.7705 | 100.0 | `attempt-1.cpp` |
| 2 | matched | 100.0 | 100.0 | `attempt-2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Attempts 1-2 are preserved exactly. Correction attempt 3 used the actual matched attempt-2 declarations as the baseline, moved the complete reusable context into heap_shared.h, and tested the exact wrapper-free packet source. It matched 244/244 bytes and 61/61 instructions.

## Outcome

Corrected on attempt 3: source contains only the shared-header include and exact released Heap::Allocate function, while shared_files contains the complete proposed heap_shared.h; tracked files were not modified.
