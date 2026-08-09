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

The released pointer and inclusive bounds checks use the shared menu entry
declaration.

## Outcome

The local entry layout was removed; the released setter remains exact.
