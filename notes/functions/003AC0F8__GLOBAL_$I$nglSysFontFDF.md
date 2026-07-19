# _GLOBAL_$I$nglSysFontFDF

- Address: `0x003AC0F8`
- Size: `0x20` (32 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/vector_common.h`
- Reference source: `NGL/PS2/vector_common.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated NGL system-font initialization thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The NGL system-font global initialization thunk matched exactly.
