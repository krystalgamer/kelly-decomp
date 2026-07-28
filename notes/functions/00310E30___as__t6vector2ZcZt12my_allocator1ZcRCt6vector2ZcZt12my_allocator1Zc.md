# __as__t6vector2ZcZt12my_allocator1ZcRCt6vector2ZcZt12my_allocator1Zc

- Address: `0x00310E30`
- Size: `0x1C0` (448 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6339 | 4.4643 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 81 lane A2 — 0x00310E30 `__as__t6vector2ZcZt12my_allocator1ZcRCt6vector2ZcZt12my_allocator1Zc`

- Candidate: exact GCC 2.95.2 vector<char, my_allocator<char> >::operator= body with faithful custom allocator declarations.
- Citation: `toolchain GCC 2.95.2 stl_vector.h:503-527`.
- Result: `different`; byte score 17.6339%; instruction score 4.4643%.
- Candidate/target size: 372/448 bytes.
- Candidate SHA-1: `7d05f4a569fc82e0b581bdb200163c2f55c79a68`.
- UTC: 2026-07-28T20:52:04.356238794Z to 2026-07-28T20:52:10.486319029Z (6.129s).

Exactly one harness invocation and one distinct candidate were used. No retry, variant, post-test diff chase, build, finalize, integration, git mutation, or tracked-file edit occurred.

## Outcome

The exact released character-vector assignment body differed at 17.6339% byte score; no source variant was attempted.
