# __uninitialized_copy_aux__H2ZPQ213light_manager9light_recZPQ213light_manager9light_rec_X01X01X11G12__false_type_X11

- Address: `0x002F3D18`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.9245 | 0.0 | `candidate.cpp` |
| 2 | different | 33.9623 | 0.0 | `candidate.cpp` |
| 3 | different | 33.9623 | 0.0 | `candidate.cpp` |
| 4 | different | 20.0 | 3.3333 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

The source-faithful uninitialized-copy loop used an inner properties loop and emitted only 152 bytes.

### Attempt 2 notes

Explicitly unrolled all 76 copied bytes. The field sequence matched conceptually, but the outer iterator/register schedule remained different.

### Attempt 3 notes

Recreated the exact nested vector, color, and light-properties copy constructors. This recovered the target centered field-copy pattern and reached 33.9623%.

### Attempt 4 notes

Pinned the outer iterators to target registers, but the constraints changed the full copy schedule and expanded the function.

### Attempt 5 notes

Tried the source-faithful inline `_Construct` helper shape; a declaration-order parse error prevented compilation.

## Outcome

Recovered the exact 76-byte light-record layout and nested vector, color, and light-properties copy sequence. Five candidates could not reproduce the shipped uninitialized-copy iterator/register schedule; best byte score was 33.9623%.
