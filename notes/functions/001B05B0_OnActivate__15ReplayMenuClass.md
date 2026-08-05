# OnActivate__15ReplayMenuClass

- Address: `0x001B05B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `size40-frontend-actions.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-frontend-actions-2.cpp` |
| 3 | matched | 100.0 | 100.0 | `size40-frontend-actions-3.cpp` |

### Attempt 1 notes

Restoring the second shipped reserved `FEMenu` vtable slot places `ReplayStart` at the target adjustment/function offsets.

## Outcome

The released `ReplayMenuClass::OnActivate` virtual thunk matched exactly.
