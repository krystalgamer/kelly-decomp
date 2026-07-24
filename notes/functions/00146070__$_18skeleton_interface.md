# _$_18skeleton_interface

- Address: `0x00146070`
- Size: `0x84` (132 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/skeleton_interface.h`
- Reference source: `KS/SRC/skeleton_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 73.6486 | 67.5676 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released skeleton-interface destructor matched after blocking the final object-delete tail call and preserving both vector deletions and base-vtable reset.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released skeleton-interface destructor matched exactly on the third attempt.
