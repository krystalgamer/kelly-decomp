# OnClose__9MenuCheatb

- Address: `0x002EF580`
- Size: `0x178` (376 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/cheatmenu.cpp`
- Reference source: `KS/SRC/ks/cheatmenu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.6915 | 88.2979 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source FIRST PASS attempt using the function body from `kelly-slaters-pro-surfer/KS/SRC/ks/cheatmenu.cpp:82-118`, with minimal declarations/layout derived from `KS/SRC/ks/cheatmenu.cpp:7-23`, `KS/SRC/ks/menu.h:78-96,140-149,227-239,303-316`, and `KS/SRC/archalloc.h:97` at pinned commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`.

Canonical attempt 1 result: `different`, score `90.6915` (instruction score `88.2979`), candidate size 372 versus target size 376. Per the one-attempt constraint, no retry, variant, or diff chase was performed.

## Outcome

Exact released-source first pass for cheat menu closure did not match.
