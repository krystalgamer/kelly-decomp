# add__11slc_managerP20script_library_class

- Address: `0x0034F400`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.0882 | 2.9412 | `candidate.cpp` |
| 2 | different | 16.0714 | 0.0 | `candidate.cpp` |
| 3 | different | 92.8571 | 71.4286 | `candidate.cpp` |
| 4 | different | 30.0 | 6.6667 | `candidate.cpp` |
| 5 | different | 30.0 | 6.6667 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the release set::insert path as an inline wrapper around the red-black tree insert_unique operation, including its ignored pair result and the recovered class-list offset.

### Attempt 2 notes

Made the insertion pair nontrivially copyable, matching the old STL return-by-hidden-pointer ABI. This recovers the released temporary pair and ignored-result copy shape.

### Attempt 3 notes

Modeled the distinct tree-iterator and set-iterator pair types used by the released STL wrapper. The conversion from the tree insertion result to the ignored set insertion result recreates the two stack temporaries.

### Attempt 4 notes

Pinned the converted iterator value with an empty barrier before reading the insertion boolean. This seeks the released first-then-second result load order without emitting instructions.

### Attempt 5 notes

Bound the converted iterator and boolean to the released return-value registers and used an empty barrier to preserve their load order. The remaining schedule still differed, so the source-only attempt limit was reached.

## Outcome

The authentic set insertion and old-STL hidden-result conversion were reconstructed to the correct size and call shape, but the available compiler reversed the final pair load/store schedule. Five source-only attempts were exhausted without prohibited byte forcing.
