# update_region__6entityb

- Address: `0x00134E20`
- Size: `0xE4` (228 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6842 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate-3-consolidated.cpp` |
| 4 | different | 19.9219 | 4.6875 | `candidate-4-consolidated.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate-5-inline-consolidated.cpp` |

### Attempt 1 notes

Used the exact released body and authentic entity, bone, link, region, and world declarations. All instructions matched; only the isolated recursive SELF relocation encoded differently.

### Attempt 2 notes

Bound the recursive SELF call only for isolated scoring. The exact released body then matched all 228 bytes and 57 instructions.

### Attempt 3 notes

First canonical-header revalidation accidentally defined the function symbol twice and did not compile.

### Attempt 4 notes

A partial raw-offset bone accessor consolidation compiled but did not inline link access, expanding the frame and function. This context was rejected.

### Attempt 5 notes

A forced-inline attribute probe was unsupported by the legacy compiler. The tracked integration instead consolidated the full released bone/link layout and passed the exact ROM gate.

## Outcome

Matched the exact released entity region update after consolidating the authentic bone/link layouts, entity region fields and virtual order, and world terrain access into canonical shared headers.
