# handle_chunk__20ai_locomotion_directR10chunk_fileR7stringx

- Address: `0x00109D88`
- Size: `0x1C` (28 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released derived chunk handler delegates directly to the base implementation.

## Outcome

The released `ai_locomotion_direct::handle_chunk` call wrapper matched exactly on the first attempt.

## Matching-only annotation

`KELLY_DECOMP_COMPILER_BARRIER()` is not recovered original source and emits
no instruction. The source-faithful wrapper was otherwise eligible for EE GCC
sibling-call or scheduling changes; the annotation preserves the target's
normal call/return ordering.
