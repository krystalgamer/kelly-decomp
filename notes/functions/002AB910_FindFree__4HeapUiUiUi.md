# FindFree__4HeapUiUiUi

- Address: `0x002AB910`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.8125 | 66.6667 | `candidate.cpp` |
| 2 | different | 85.4167 | 75.0 | `candidate.cpp` |
| 3 | different | 85.4167 | 75.0 | `candidate.cpp` |
| 4 | different | 28.6458 | 2.0833 | `candidate.cpp` |
| 5 | different | 27.6042 | 2.0833 | `candidate.cpp` |

### Attempt 2 notes

Binding the original flags and direction bit reached the best score, but the
callee-save and free-list traversal branch schedule remained different.

### Attempt 5 notes

Repeated flag tests, explicit branches, and cached header/footer sizes could
not reproduce the target register allocation.

## Outcome

Five source-level heap search forms could not reproduce the target flags, callee-save, and free-list traversal register schedule.
