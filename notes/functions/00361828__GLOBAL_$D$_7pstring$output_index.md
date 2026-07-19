# _GLOBAL_$D$_7pstring$output_index

- Address: `0x00361828`
- Size: `0x20` (32 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.h`
- Reference source: `KS/SRC/vm_thread.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated pstring destruction thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The pstring global destruction thunk matched exactly.
