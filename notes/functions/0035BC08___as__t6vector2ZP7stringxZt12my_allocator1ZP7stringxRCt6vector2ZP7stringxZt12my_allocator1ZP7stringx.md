# __as__t6vector2ZP7stringxZt12my_allocator1ZP7stringxRCt6vector2ZP7stringxZt12my_allocator1ZP7stringx

- Address: `0x0035BC08`
- Size: `0x204` (516 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.2171 | 5.4264 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 99 lane B1

Exact GCC 2.95 `vector<stringx*>` `operator=` body with `my_allocator` tested once for `0x0035BC08`. Attempts before: 0. LF-only candidate. Result `different`, byte score 18.2171%, instruction score 5.4264%. No retry, build, git operation, or tracked edit.

## Outcome

The exact released string-pointer vector assignment body differed at 18.2171% byte score; no source variant was attempted.
