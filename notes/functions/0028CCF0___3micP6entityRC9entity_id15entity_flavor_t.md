# __3micP6entityRC9entity_id15entity_flavor_t

- Address: `0x0028CCF0`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/mic.cpp`
- Reference source: `KS/SRC/mic.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.5909 | 86.3636 | `candidate.cpp` |
| 2 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 3 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 4 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 5 | different | 90.9091 | 90.9091 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released mic constructor, entity base constructor, link interface offset, set_parent helper, and mic vtable. Only the vtable constant register differed, reaching 96.59%.

### Attempt 2 notes

Constrained the vtable constant to v1. This grouped its high/low materialization before the link load, leaving a two-instruction schedule mismatch.

### Attempt 3 notes

Named the link pointer and used an input-only vtable constraint. The link load interleaved correctly, but vtable store/parent argument setup swapped.

### Attempt 4 notes

Removed the link local while keeping an input-only fixed vtable. The earlier two-instruction high/low-vs-link schedule returned.

### Attempt 5 notes

Reintroduced the link local with an explicit vtable cast to make a fifth distinct source candidate. The compiler retained the same equivalent two-instruction schedule.

## Outcome

Released mic constructor remained blocked by an equivalent two-instruction vtable/link scheduling difference after five source-level attempts.
