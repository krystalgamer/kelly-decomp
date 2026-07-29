# _M_insert_aux__t6vector2ZP4itemZt12my_allocator1ZP4itemPP4itemRCP4item

- Address: `0x00142AD8`
- Size: `0x204` (516 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8295 | 6.2016 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave96 lane B3

Exact GCC 2.95.2 `stl_vector.h` `_M_insert_aux` body with `my_allocator<item *>` tested once for `0x00142AD8`. Result `different`, byte score 17.8295%, instruction score 6.2016%. No retry, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released item-pointer vector insertion body differed at 17.8295% byte score; no source variant was attempted.
