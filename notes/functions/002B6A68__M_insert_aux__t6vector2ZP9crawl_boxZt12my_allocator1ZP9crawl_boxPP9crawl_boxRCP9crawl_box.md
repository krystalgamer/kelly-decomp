# _M_insert_aux__t6vector2ZP9crawl_boxZt12my_allocator1ZP9crawl_boxPP9crawl_boxRCP9crawl_box

- Address: `0x002B6A68`
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

# FIRST PASS wave98 lane A3

Exact GCC 2.95.2 released `_M_insert_aux` body for `vector<crawl_box *>`, with `my_allocator`, minimal self-contained declarations, and LF endings. Attempts before: 0. Exactly one harness test. Result: different, byte score 17.8295%, instruction score 6.2016%. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released crawl-box pointer vector insertion body differed at 17.8295% byte score; no source variant was attempted.
