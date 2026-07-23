# force_to_cell_collumn__C16ai_polypath_cellR8vector3d

- Address: `0x0010CF08`
- Size: `0x58` (88 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath_cell.cpp`
- Reference source: `KS/SRC/ai_polypath_cell.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.2727 | 68.1818 | `candidate.cpp` |
| 2 | different | 77.2727 | 68.1818 | `candidate.cpp` |
| 3 | different | 66.3043 | 47.8261 | `candidate.cpp` |
| 4 | different | 68.1818 | 59.0909 | `candidate.cpp` |
| 5 | different | 59.0909 | 45.4545 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released vector3d wrapper, vector2d constructor, helper overload, and copy-back body. Size matched, but the compiler inverted the success/failure block layout.

### Attempt 2 notes

Made the success and failure labels explicit. The optimizer retained the same inverted branch form.

### Attempt 3 notes

Used a fixed return register and common done label. This introduced an extra instruction and regressed.

### Attempt 4 notes

Removed the fixed register while keeping a common result. The branch/result schedule still differed.

### Attempt 5 notes

Restored direct false/true returns and added a non-emitting boundary at the success label. The compiler shortened the function rather than reproducing the target block layout.

## Outcome

Released ai_polypath_cell vector3d force wrapper remained blocked by equivalent success/failure block layout after five source-level attempts.
