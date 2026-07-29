# _M_insert_aux__t6vector2ZP8materialZt12my_allocator1ZP8materialPP8materialRCP8material

- Address: `0x002B2D28`
- Size: `0x204` (516 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8295 | 6.2016 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 97 lane A5

Exact GCC 2.95.2 `vector<material*>` `_M_insert_aux` body with `my_allocator` tested once for `0x002B2D28`. Result `different`, score 17.8295%. No retry, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released material-pointer vector insertion body differed at 17.8295% byte score; no source variant was attempted.
