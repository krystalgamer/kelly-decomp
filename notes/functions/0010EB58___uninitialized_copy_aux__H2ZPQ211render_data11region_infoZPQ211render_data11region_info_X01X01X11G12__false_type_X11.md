# __uninitialized_copy_aux__H2ZPQ211render_data11region_infoZPQ211render_data11region_info_X01X01X11G12__false_type_X11

- Address: `0x0010EB58`
- Size: `0x5C` (92 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.2609 | 0.0 | `candidate.cpp` |
| 2 | different | 53.2609 | 4.3478 | `candidate.cpp` |
| 3 | different | 15.1786 | 0.0 | `candidate.cpp` |
| 4 | different | 66.3043 | 56.5217 | `candidate.cpp` |
| 5 | different | 52.1739 | 4.3478 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released region_info copy constructor and placement-copy loop. The compiler coalesced source/result iterators and produced 76 bytes.

### Attempt 2 notes

Added separate source/current iterators and advanced both parameter/result pairs. Size improved to 88 but registers/branch form differed.

### Attempt 3 notes

Constrained current/source to target registers after an explicit empty-range check. This caused spills and growth.

### Attempt 4 notes

Reordered unconstrained current/source declarations. The loop reached 66.30% at 88 bytes but still lacked one target iterator update.

### Attempt 5 notes

Changed the placement null test to the current iterator to seek the target branch-likely form. The compiler retained an 88-byte alternate loop.

## Outcome

Generated region_info uninitialized copy remained blocked by iterator and branch-likely scheduling after five source-level attempts.
