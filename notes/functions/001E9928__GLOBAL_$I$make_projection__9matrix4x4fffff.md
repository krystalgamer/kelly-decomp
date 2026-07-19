# _GLOBAL_$I$make_projection__9matrix4x4fffff

- Address: `0x001E9928`
- Size: `0x20` (32 bytes)
- Object: `game/files_hwosps2`
- Debug source: `../../ngl/ps2/vector_common.h`
- Reference source: `NGL/PS2/vector_common.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated matrix global initialization thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The matrix global initialization thunk matched exactly.
