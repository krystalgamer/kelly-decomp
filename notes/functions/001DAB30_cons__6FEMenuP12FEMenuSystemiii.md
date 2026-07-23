# cons__6FEMenuP12FEMenuSystemiii

- Address: `0x001DAB30`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2273 | 9.0909 | `candidate.cpp` |
| 2 | different | 43.1818 | 22.7273 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released inline FEMenu::cons overload, color32 byte-order constructor, max-visible argument, menu vptr offset, and full-cons virtual slot. Using unnamed color32 temporaries converted to packed words reproduced the target stack construction and matched on attempt 3.

## Outcome

Matched released FEMenu convenience constructor
