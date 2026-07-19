# _GLOBAL_$I$TRAIL_StaticInit__Fv

- Address: `0x00385388`
- Size: `0x20` (32 bytes)
- Object: `game/files_wave`
- Debug source: `particle.h`
- Reference source: `KS/SRC/particle.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated trail initialization thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The trail global initialization thunk matched exactly.
