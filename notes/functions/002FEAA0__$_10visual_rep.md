# _$_10visual_rep

- Address: `0x002FEAA0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `visrep.h`
- Reference source: `KS/SRC/visrep.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released generated destructor restores its vtable at offset 0x10 and conditionally calls `__builtin_delete`; the carried vtable alias and trailing barrier preserve the target frame.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `_$_10visual_rep` destructor matched exactly on the first attempt.
