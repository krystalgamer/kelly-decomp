# __uninitialized_copy_aux__H2ZP5planeZP5plane_X01X01X11G12__false_type_X11

- Address: `0x001103C0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.7391 | 0.0 | `candidate.cpp` |
| 2 | different | 25.0 | 4.3478 | `candidate.cpp` |
| 3 | different | 27.0 | 4.0 | `candidate.cpp` |
| 4 | different | 23.913 | 0.0 | `candidate.cpp` |
| 5 | different | 25.0 | 4.3478 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released plane copy constructor and placement-copy loop. The compiler coalesced iterators and produced 68 bytes.

### Attempt 2 notes

Added separate source/current iterators and duplicate parameter/result advancement. Size improved to 80 but register/layout differed.

### Attempt 3 notes

Constrained source/current to target registers after an explicit range check. This caused spills and growth.

### Attempt 4 notes

Reordered unconstrained current/source declarations. The compiler retained an 80-byte alternate loop.

### Attempt 5 notes

Changed the placement null test to the current iterator. The target 92-byte branch-likely/update schedule remained unreproduced.

## Outcome

Generated plane uninitialized copy remained blocked by iterator and branch-likely scheduling after five source-level attempts.
