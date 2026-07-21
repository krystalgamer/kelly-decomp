# OnMenuOpen__7SubmenuP4MenuP10MenuSystem

- Address: `0x00270A20`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.6471 | 88.2353 | `submenu_onmenuopen_candidate.cpp` |
| 2 | different | 89.7059 | 76.4706 | `submenu_onmenuopen_candidate.cpp` |
| 3 | different | 89.7059 | 76.4706 | `submenu_onmenuopen_candidate.cpp` |
| 4 | different | 89.7059 | 76.4706 | `candidate.cpp` |
| 5 | different | 95.5882 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The minimal immediate-base declaration preserved the target register schedule and store order, but placed `parent`/`system` at `0x8`/`0xC` and called a nonexistent `MenuEntryLabel` override.

### Attempt 2 notes

Reordering the assignments reversed the saved argument registers and stores while retaining the incorrect immediate-base symbol and undersized layout.

### Attempt 3 notes

Reordering the members changed which undersized offsets received each argument, but did not recover the inherited `MenuEntry` call or the real base-object size.

### Attempt 4 notes

Modeling `MenuEntry` flags/vtable and the `MenuEntryLabel` label recovered the inherited `MenuEntry::OnMenuOpen` relocation and exact `0x10`/`0x14` member offsets. The assignment order still produced reversed saved registers and stores.

### Attempt 5 notes

Restoring the immutable source assignment order produced all 17 target instructions with the exact register schedule, inherited base-call ABI, and member offsets. The isolated candidate omitted the absolute `.equ` binding for `MenuEntry::OnMenuOpen`, leaving only the three raw JAL address bytes different; the five-attempt limit prevents correction.

## Outcome

The exact inherited MenuEntry base call, Submenu offsets 0x10/0x14, and target scheduling were recovered by attempt 5, which matched all 17 instructions. Its isolated call relocation was not bound to the absolute base-function address, so three raw JAL bytes remained different; the function is deferred at the mandatory five-attempt limit without integrating source.
