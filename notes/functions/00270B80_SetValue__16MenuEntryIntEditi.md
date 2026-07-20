# SetValue__16MenuEntryIntEditi

- Address: `0x00270B80`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released pointer and inclusive bounds checks matched exactly with `tint`, `lo`, and `hi` at offsets 0xc, 0x10, and 0x14.

## Outcome

The released menu integer value setter matched exactly on the first attempt.
