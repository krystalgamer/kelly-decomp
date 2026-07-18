# SetHeapMessagers__4HeapPFPCc_vT1

- Address: `0x002AB2F8`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static setter writes the warning and error callback globals through local absolute equates.

## Outcome

The released `Heap::SetHeapMessagers` global stores matched exactly on the first attempt.
