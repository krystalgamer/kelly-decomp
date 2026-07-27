# nglListBeginScene__FP11nglSortInfo

- Address: `0x00399560`
- Size: `0x108` (264 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.2576 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Extracted `nglListBeginScene` verbatim from released `NGL/PS2/ngl_ps2.cpp`.
- Added only declarations needed for the accessed `nglScene` fields, exact 1200-byte size, sort info, globals, allocator, node callback, and node insertion.
- Tested exactly once.
- Result: `different`; byte score 13.2576% (35/264), instruction score 0% (0/66), candidate size 240 versus target 264.
- No variants or diff chasing performed.

## Outcome

The exact released NGL scene-begin definition differed from the target; the sole attempt scored 13.2576%.
