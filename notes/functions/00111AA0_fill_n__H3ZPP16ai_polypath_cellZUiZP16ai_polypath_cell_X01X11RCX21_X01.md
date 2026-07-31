# fill_n__H3ZPP16ai_polypath_cellZUiZP16ai_polypath_cell_X01X11RCX21_X01

- Address: `0x00111AA0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The generated pointer fill semantics are preserved. Reviewed asm retains the two generated nops and encodes the branch-delay pointer increment without forbidden reorder directives.

## Outcome

Matched generated polygon-cell pointer fill loop.
