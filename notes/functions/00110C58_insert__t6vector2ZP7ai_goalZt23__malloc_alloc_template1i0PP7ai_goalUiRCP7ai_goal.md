# insert__t6vector2ZP7ai_goalZt23__malloc_alloc_template1i0PP7ai_goalUiRCP7ai_goal

- Address: `0x00110C58`
- Size: `0x234` (564 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 109 lane A2

Exact GCC 2.95 `vector<ai_goal*>::insert` source tested once for `0x00110C58`. Result `compile_failed`, score 0.0000%; the isolated harness could not resolve `ai_goals.h`. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released AI-goal vector insertion candidate failed to compile with its minimal declarations; no alternate source was attempted.
