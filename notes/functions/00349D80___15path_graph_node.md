# __15path_graph_node

- Address: `0x00349D80`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.0588 | 11.7647 | `candidate.cpp` |
| 2 | different | 67.6471 | 35.2941 | `candidate.cpp` |
| 3 | different | 67.6471 | 35.2941 | `candidate.cpp` |
| 4 | different | 29.5455 | 22.7273 | `candidate.cpp` |
| 5 | different | 72.0588 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

Used the released constructor and abbreviated vector/allocator layout; the vector pointers were not initialized.

### Attempt 2 notes

Restored vector pointer initialization and external allocator vtable; values matched but frame and scheduling differed.

### Attempt 3 notes

Added the released nontrivial vector destructor declaration to model cleanup; code generation remained unchanged.

### Attempt 4 notes

Modeled the released SDK allocator default temporary; extra temporary construction enlarged the function.

### Attempt 5 notes

Modeled the allocator as the vector base, matching the SDK empty-base pattern; frame and initialization schedule still differed.

## Outcome

Deferred after five original-source and released-SDK layout attempts; the clear call and vector state are reconstructed, but the exact generated vector-construction frame is unavailable.
