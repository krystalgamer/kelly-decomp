# __uninitialized_copy_aux__H2ZPQ213message_board7messageZPQ213message_board7message_X01X01X11G12__false_type_X11

- Address: `0x002F49B0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.5161 | 17.7419 | `candidate.cpp` |
| 2 | different | 39.5161 | 17.7419 | `candidate.cpp` |
| 3 | different | 39.5161 | 17.7419 | `candidate.cpp` |
| 4 | different | 27.0492 | 0.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

The 104-byte message assignment produced the expected aligned/unaligned block-copy paths, but with a larger outer-loop schedule.

### Attempt 2 notes

Placement construction with the implicit copy constructor emitted the same 248-byte shape; best score was 39.5161%.

### Attempt 3 notes

Separating the result iterator from the input parameter did not change generated code.

### Attempt 4 notes

Pinning the result iterator to the target return register disturbed the block-copy register assignment and still emitted 244 bytes.

### Attempt 5 notes

Tried the source-faithful inline `_Construct` helper shape; a declaration-order parse error prevented compilation.

## Outcome

Recovered the exact 104-byte message layout and aligned/unaligned block-copy paths. Five candidates could not reproduce the shipped uninitialized-copy outer iterator schedule; best byte score was 39.5161%.
