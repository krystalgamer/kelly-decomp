# sort_edges_by_weight__FRt6vector2ZP15path_graph_edgeZt12my_allocator1ZP15path_graph_edge

- Address: `0x00349D30`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 5.8824 | 0.0 | `candidate.cpp` |
| 3 | different | 51.4706 | 41.1765 | `candidate.cpp` |
| 4 | different | 5.8824 | 0.0 | `candidate.cpp` |
| 5 | different | 2.9412 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body with an abbreviated vector type; the symbol lacked the released allocator template.

### Attempt 2 notes

Restored my_allocator and exact template mangling; GCC tail-called qsort instead of retaining the wrapper.

### Attempt 3 notes

Added the allowed empty barrier after the demonstrated qsort tail call; the call became normal but branch-delay epilogue scheduling differed.

### Attempt 4 notes

Moved the barrier before qsort after inspecting the diff; the wrapper layout still differed.

### Attempt 5 notes

Expressed the equivalent early return without a barrier; GCC again tail-called qsort.

## Outcome

Deferred after five source-only attempts; the released vector/qsort behavior is reconstructed, but the isolated compiler either tail-calls qsort or schedules the guarded epilogue differently.
