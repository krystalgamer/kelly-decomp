# _$_20FEGraphicalMenuEntry

- Address: `0x001DAE68`
- Size: `0x6C` (108 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reused the source-faithful FEMenuEntry destructor layout for FEGraphicalMenuEntry. The vtable transition, description deletion, and deleting path matched on attempt 1.

## Outcome

Matched graphical menu entry destructor
