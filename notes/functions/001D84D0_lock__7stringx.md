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
| 2 | matched | 100.0 | 100.0 | `size48-frontend-selectors.cpp` |

### Attempt 1 notes

The explicit early return for reference counts below two reproduces the target RA restore in the branch delay slot; the trailing barrier preserves the normal `fork_data(-1)` call.

### Attempt 2 notes

A local function pointer preserves the normal `fork_data(-1)` call without a
compiler barrier.

## Outcome

The compiler barrier was removed.
