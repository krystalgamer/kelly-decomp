# MenuText__18MenuEntryFloatEditPci

- Address: `0x0023FA90`
- Size: `0x108` (264 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 95.4545 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Used the released `MenuEntryFloatEdit::MenuText` body verbatim from `kelly-slaters-pro-surfer/KS/SRC/ks/menu.cpp:644-665`.
- Used only the required released `MenuEntry`, `MenuEntryLabel`, and `MenuEntryFloatEdit` layout and virtual declarations from `menu.h:103-188,340-362`, plus the required C library declarations.
- Verified the candidate was not the generated placeholder before testing.
- Result: **different** — byte score 87.5%, instruction score 95.4545%; candidate and target are both 264 bytes. Exactly one function test was run; no variants were attempted.

## Outcome

The exact released float-edit menu text definition differed from the target; the sole attempt scored 87.5%.
