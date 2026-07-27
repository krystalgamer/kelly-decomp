# MENU_GetButtonState__Fi

- Address: `0x002405D0`
- Size: `0x11C` (284 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.1549 | 91.5493 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released `MENU_GetButtonState` body with the released `MenuCommand` ordering, PSX control constants, and declarations for the two called menu input helpers. The isolated object has the target size but differs in branch/jump-table code generation; no source variants were tested.

## Outcome

The exact released menu button-state getter differed from the target; the sole attempt scored 84.1549%.
