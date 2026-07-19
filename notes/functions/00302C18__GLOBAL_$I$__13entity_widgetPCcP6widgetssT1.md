# _GLOBAL_$I$__13entity_widgetPCcP6widgetssT1

- Address: `0x00302C18`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/bp_tree.h`
- Reference source: `KS/SRC/bp_tree.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reconstructs the compiler-generated entity-widget initialization thunk.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The entity-widget global initialization thunk matched exactly.
