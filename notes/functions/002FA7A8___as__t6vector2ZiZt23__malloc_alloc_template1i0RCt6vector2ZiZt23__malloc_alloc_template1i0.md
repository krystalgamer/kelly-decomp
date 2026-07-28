# __as__t6vector2ZiZt23__malloc_alloc_template1i0RCt6vector2ZiZt23__malloc_alloc_template1i0

- Address: `0x002FA7A8`
- Size: `0x184` (388 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.9897 | 14.433 | `candidate.cpp` |

### Attempt 1 notes

# Released-source FIRST PASS wave 64 lane A2

- Address: `0x002FA7A8`
- Symbol: `__as__t6vector2ZiZt23__malloc_alloc_template1i0RCt6vector2ZiZt23__malloc_alloc_template1i0`
- Status: `source_pending`
- Attempts: `1`; attempt 1 status: `different`
- Byte score: `32.9897%` (`128/388` matching bytes)
- Instruction score: `14.4330%` (`14/97` matching instructions)
- Candidate: `tmp/functions/002FA7A8___as__t6vector2ZiZt23__malloc_alloc_template1i0RCt6vector2ZiZt23__malloc_alloc_template1i0/attempt-1/candidate.cpp`
- Candidate SHA-1: `353d1ee6fd283e7021a220e6e42637e9d3a5c929`
- Started: `2026-07-28T10:24:59Z` (`1785234299`)
- Completed: `2026-07-28T10:38:48Z` (`1785235128`)
- Timing: `829` seconds

The sole candidate uses the exact GCC 2.95.2 `stl_vector.h` `vector::operator=` body with minimum source-faithful vector and malloc-allocator declarations. No variants, retries, or diff chasing were performed.

## Citations

- GCC 2.95.2 release archive, `gcc-2.95.2/libstdc++/stl/stl_vector.h:503-527`
- `config/SLUS_203.34.symbol_addrs.txt:5163`
- `notes/function_queue.csv:6318`
- `tmp/functions/002FA7A8___as__t6vector2ZiZt23__malloc_alloc_template1i0RCt6vector2ZiZt23__malloc_alloc_template1i0/metadata.json`
- `tmp/functions/002FA7A8___as__t6vector2ZiZt23__malloc_alloc_template1i0RCt6vector2ZiZt23__malloc_alloc_template1i0/attempt-1/result.json`

## Outcome

The exact released integer vector assignment differed at 32.9897% byte score; no source variant was attempted.
