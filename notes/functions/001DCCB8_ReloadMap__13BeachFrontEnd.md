# ReloadMap__13BeachFrontEnd

- Address: `0x001DCCB8`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.h`
- Reference source: `KS/SRC/ks/BeachFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal padding preserves `path_pq` at 0xe94 and `map` at 0xee4.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The inline `BeachFrontEnd::ReloadMap` wrapper matched exactly.
