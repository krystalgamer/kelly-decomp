# SplitBlock__4HeapP12MemBlockInfoUi

- Address: `0x002ABCC8`
- Size: `0xFC` (252 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.619 | 96.8254 | `candidate.cpp` |

### Attempt 1 notes

# SplitBlock__4HeapP12MemBlockInfoUi — 0x002ABCC8

- Object: `game/files_misc1`
- Released source: `kelly-slaters-pro-surfer/KS/SRC/heap.cpp:1204-1261`
- Queue state at start: **pending**, with **0** pre-existing scratch attempts
- Attempt 1: **different**, 97.619% bytes / 96.8254% instructions, 252 bytes

## Attempt 1

Used the exact released `Heap::SplitBlock` body. The self-contained candidate
adds only the authentic enabled `HEAP_OFTYPE_LINKS` layout, heap block flag
types/constants, the `Heap` prefix through `heapid`, inline `GetHeapID()`, and
address bindings for `HeaderSize()` and `SetBlockSentry()`.

No second attempt or diff-driven source change was made.

## Citations

- Body: `kelly-slaters-pro-surfer/KS/SRC/heap.cpp:1204-1261`
- Flags, block layout, assertions: `kelly-slaters-pro-surfer/KS/SRC/heap.cpp:26-80`
- Heap types and enabled list macro: `kelly-slaters-pro-surfer/KS/SRC/heap.h:10-16`; `kelly-slaters-pro-surfer/KS/SRC/heaptype.h:29-34`
- Heap layout and helpers: `kelly-slaters-pro-surfer/KS/SRC/heap.h:33-69,153-166`
- Adjacent shared prior art: `src/KS/SRC/heap_shared.h:4-55`

## Outcome

Exact released Heap SplitBlock source differed from the target; preserved attempt 1 for the later Sol pass.
