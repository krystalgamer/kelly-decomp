# _M_insert_aux__t6vector2ZP11beam_effectZt12my_allocator1ZP11beam_effectPP11beam_effectRCP11beam_effect

- Address: `0x002AF390`
- Size: `0x204` (516 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.2791 | 2.3256 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 97 A2

Target: `0x002AF390 vector<beam_effect *, my_allocator<beam_effect *> >::_M_insert_aux`

Confirmed queue attempts were `0`. Exactly one source-faithful GCC 2.95.2
`stl_vector` insertion candidate was tested.

Result: **different**, byte score **16.2791%** (84/516), instruction score
**2.3256%** (3/129); candidate size 372 bytes versus target size 516 bytes.

No retry, variant chasing, build, finalize, integration, tracked-file edit,
commit, or push.

## Outcome

The exact released beam-effect pointer vector insertion body differed at 16.2791% byte score; no source variant was attempted.
