# MenuText__17MenuEntryListEditPci

- Address: `0x00240018`
- Size: `0x10C` (268 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.9254 | 95.5224 | `candidate.cpp` |

### Attempt 1 notes

# First-pass notes

- Used the exact released body from `kelly-slaters-pro-surfer/KS/SRC/ks/menu.cpp:784-808`.
- Added only self-contained declarations needed for class layout, virtual dispatch, and C string functions.
- Candidate was verified non-placeholder before the recorded attempt.
- Single recorded attempt compiled and emitted the target symbol, but differed at 89.9254% byte score (95.5224% instruction score).
- No variants or diff chasing were performed.

## Outcome

The exact released list-edit menu text definition differed from the target; the sole attempt scored 89.9254%.
