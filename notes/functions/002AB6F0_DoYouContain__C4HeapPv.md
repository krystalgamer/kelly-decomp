# DoYouContain__C4HeapPv

- Address: `0x002AB6F0`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released Heap::DoYouContain body, heap size/start offsets, HeaderSize helper, and unsigned pointer range checks. It matched byte-exactly.

## Outcome

Matched released heap containment check
