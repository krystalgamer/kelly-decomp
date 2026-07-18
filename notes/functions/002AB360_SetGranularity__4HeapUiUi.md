# SetGranularity__4HeapUiUi

- Address: `0x002AB360`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `minalloc` at `0x24` then `minalign` at `0x28`; scheduling moves the first store into the delay slot.

## Outcome

The released `Heap::SetGranularity` assignments matched exactly on the first attempt.
