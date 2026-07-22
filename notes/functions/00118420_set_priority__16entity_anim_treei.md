# set_priority__16entity_anim_treei

- Address: `0x00118420`
- Size: `0x4C` (76 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 45.2381 | 14.2857 | `candidate.cpp` |
| 3 | different | 51.25 | 20.0 | `candidate.cpp` |
| 4 | different | 38.1579 | 10.5263 | `candidate.cpp` |
| 5 | different | 53.75 | 30.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body initially failed because the first shared declaration lacked the GCC vector iterator typedef; the shared original-style context was extended rather than adding a selector-local type.

### Attempt 2 notes

The released loop compiled with correct object offsets, but a direct boolean validity helper normalized the flag and produced 84 bytes.

### Attempt 3 notes

Restoring the released nested is_flagged/is_valid helper removed boolean normalization and reached 80 bytes, but GCC cached the vector reference across one path unlike the target.

### Attempt 4 notes

A source-equivalent post-increment traversal overcompacted the loop to 64 bytes and moved farther from the released target schedule.

### Attempt 5 notes

A normalized empty barrier aimed specifically at the demonstrated vector-reference caching changed scheduling but remained 80 bytes and did not reproduce the target reload path.

## Outcome

Deferred after five released-style vector traversals; shared class offsets and validity semantics match, but the target GCC iterator alias schedule remains different.
