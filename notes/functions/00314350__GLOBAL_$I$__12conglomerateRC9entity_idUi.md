# _GLOBAL_$I$__12conglomerateRC9entity_idUi

- Address: `0x00314350`
- Size: `0x20` (32 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/bp_tree.h`
- Reference source: `KS/SRC/bp_tree.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated conglomerate initialization thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The conglomerate global initialization thunk matched exactly.
