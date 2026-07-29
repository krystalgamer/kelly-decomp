# _M_insert_aux__t6vector2ZP12material_setZt12my_allocator1ZP12material_setPP12material_setRCP12material_set

- Address: `0x002B52A8`
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

FIRST PASS wave98 A2
Target: 0x002B52A8 vector<material_set*> _M_insert_aux (516/0x204), game/files_misc1
Attempts before: 0
Attempt 1: exact GCC 2.95.2 released body with my_allocator, minimal self-contained declarations, LF line endings
Result: different; byte score 17.8295; instruction score 6.2016; candidate size 356; target size 516
Exactly one candidate was tested. No retry, diff chase, build, finalization, integration, queue edit, tracked edit, commit, or push.

## Outcome

The exact released material-set pointer vector insertion body differed at 17.8295% byte score; no source variant was attempted.
