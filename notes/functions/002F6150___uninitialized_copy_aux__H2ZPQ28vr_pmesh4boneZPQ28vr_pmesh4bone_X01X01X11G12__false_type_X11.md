# __uninitialized_copy_aux__H2ZPQ28vr_pmesh4boneZPQ28vr_pmesh4bone_X01X01X11G12__false_type_X11

- Address: `0x002F6150`
- Size: `0x100` (256 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.1094 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Exact GCC g++-2 stl_uninitialized.h __uninitialized_copy_aux false-type loop, instantiated for vr_pmesh::bone pointers; nested bone declaration is released at kelly-slaters-pro-surfer/KS/SRC/pmesh.h:269-275. Attempt 1 compiled but differed: score 12.1094 (31/256 bytes), candidate size 220 vs target 256. No variants attempted.

## Outcome

The exact released STL uninitialized-copy helper differed from the target; the sole attempt scored 12.1094%.
