# _$_11FEMenuEntry

- Address: `0x001DA480`
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

Read the FEMenuEntry vtable transition, description TextString deletion, and deleting-destructor path. It matched on attempt 1.

## Outcome

Matched frontend menu entry destructor
