# insert__t6vector2ZcZt12my_allocator1ZcPcUiRCc

- Address: `0x00310BB8`
- Size: `0x278` (632 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5127 | 2.5316 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 120 lane A4

Exact GCC `stl_vector.h` `vector<char>::insert(iterator, size_type, const char&)` body tested once with LF source. Result `different`, score 18.5127%. No retry, follow-up, build, git operation, or tracked edit.

## Outcome

The exact released character-vector insertion body differed at 18.5127% byte score; no source variant was attempted.
