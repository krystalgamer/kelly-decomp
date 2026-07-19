# nglMulMatrix__FR9nglMatrixRC9nglMatrixT1

- Address: `0x00395F28`
- Size: `0x1C` (28 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate modeled `nglMatrix` as an array typedef, emitting the array-reference mangling instead of the released class-reference symbol.

### Attempt 2 notes

The released NGL helper forwards all three matrix buffers to the SDK VU0 multiply routine.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `nglMulMatrix` wrapper matched exactly.
