# fill_n__H3ZPP16ai_polypath_cellZUiZP16ai_polypath_cell_X01X11RCX21_X01

- Address: `0x00111AA0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 3 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 4 | different | 23.0769 | 0.0 | `candidate.cpp` |
| 5 | different | 18.75 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The while-loop spelling advanced the output pointer before the backedge instead of in the branch delay slot.

### Attempt 2 notes

The second source spelling retained the same code generation mismatch.

### Attempt 3 notes

The third loop spelling retained the same instruction schedule.

### Attempt 4 notes

The compact postincrement loop changed the loop semantics/code shape and did not reproduce the target backedge schedule.

### Attempt 5 notes

The fifth source shape still emitted the isolated compiler schedule rather than the target template backedge; the five-attempt limit is exhausted.

## Outcome

Five source loop spellings could not reproduce the target pointer increment in the branch delay slot; best byte score was 86.3636%.
