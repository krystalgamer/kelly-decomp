# get_object__C5beachi

- Address: `0x001E9C28`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/beach.cpp`
- Reference source: `KS/SRC/ks/beach.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.5714 | 75.0 | `candidate.cpp` |
| 2 | different | 53.5714 | 75.0 | `candidate.cpp` |
| 3 | different | 50.0 | 20.0 | `candidate.cpp` |
| 4 | different | 53.5714 | 75.0 | `candidate.cpp` |
| 5 | different | 33.9286 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released indexed linked-list traversal. All source operations matched, but EE GCC omitted the target's two dependency nops between loading `next` and testing it, producing 48 bytes.

### Attempt 2 notes

Rewrote the released loop as an explicit while traversal. The compiler emitted the same 48-byte sequence without the target dependency nops.

### Attempt 3 notes

Used an explicit empty-list guard followed by a do-while traversal. This changed the return layout and grew the function to 60 bytes without recovering the target schedule.

### Attempt 4 notes

Staged the next-list pointer in a local before updating the index. Optimization collapsed it back to the same 48-byte loop as the released source.

### Attempt 5 notes

Combined the comparison and index increment with post-increment syntax. EE GCC changed the control flow and register schedule but still did not emit the target dependency gap.

## Outcome

Five source-level linked-list traversal forms could not reproduce the target's two-instruction load-to-branch dependency gap with the available EE GCC.
