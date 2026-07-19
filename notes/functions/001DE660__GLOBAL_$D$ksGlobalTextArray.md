# _GLOBAL_$D$ksGlobalTextArray

- Address: `0x001DE660`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `lightmgr.h`
- Reference source: `KS/SRC/lightmgr.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated global text destruction thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The global text array destruction thunk matched exactly.
