# _$_20QuitConfirmMenuClass

- Address: `0x001DD900`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.h`
- Reference source: `KS/SRC/ks/FrontEndMenus.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released inline destructor, FEMenu inheritance, question offset, derived vtable, and virtual delete path. It matched on attempt 1.

## Outcome

Matched quit confirmation destructor
