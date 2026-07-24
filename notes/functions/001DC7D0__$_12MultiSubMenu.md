# _$_12MultiSubMenu

- Address: `0x001DC7D0`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.h`
- Reference source: `KS/SRC/ks/MainFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released inline destructor, FEMenu inheritance, difficulty offset, derived vtable, and virtual delete path. It matched on attempt 1.

## Outcome

Matched multiplayer submenu destructor
