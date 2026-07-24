# PlaySurferTrick__15FEEntityManagerP11SurferTrick

- Address: `0x001C3098`
- Size: `0x80` (128 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.625 | 6.25 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released surfer-trick launcher matched after correcting negative-low global aliases and blocking the unwanted tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released frontend surfer-trick launcher matched exactly on the second attempt.
