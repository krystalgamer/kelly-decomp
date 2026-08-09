# CheckStackCollision__C4Heap

- Address: `0x002AB7F8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-item-fill-core.cpp` |

### Attempt 1 notes

The initial isolated layout conditionally forwarded the low/high stack bounds.

### Attempt 2 notes

The shared heap declaration and a local function pointer preserve the normal
call frame without a compiler barrier.

## Outcome

The local layout and compiler barrier were removed.
