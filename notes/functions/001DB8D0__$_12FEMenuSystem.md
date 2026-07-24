# _$_12FEMenuSystem

- Address: `0x001DB8D0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.0 | 60.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released generated destructor body, class layout, vtable, vector delete, and deleting-destructor flags. A final-call continuation barrier matched on attempt 2.

## Outcome

Matched FE menu system destructor
