# FEDB_ToggleDraw__15FEEntityManageri

- Address: `0x001C94A0`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.0312 | 43.75 | `candidate.cpp` |
| 2 | different | 57.0312 | 43.75 | `candidate.cpp` |
| 3 | different | 76.5152 | 66.6667 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released debug switch matched after preserving the source-level per-case entity calls and preventing the default debug print from tail-calling.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released frontend entity draw toggle matched exactly on the fourth attempt.
