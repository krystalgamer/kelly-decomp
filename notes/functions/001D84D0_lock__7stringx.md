# lock__7stringx

- Address: `0x001D84D0`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `stringx.h`
- Reference source: `KS/SRC/stringx.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The explicit early return for reference counts below two reproduces the target RA restore in the branch delay slot; the trailing barrier preserves the normal `fork_data(-1)` call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `stringx::lock` implementation matched exactly on the first attempt.
