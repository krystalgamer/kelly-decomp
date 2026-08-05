# OnActivate__16CompEndMenuClass

- Address: `0x001A8FF8`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `size40-frontend-actions.cpp` |
| 2 | different | 18.4211 | 0.0 | `size40-frontend-actions-2.cpp` |
| 3 | different | 17.5 | 10.0 | `size40-frontend-actions-3.cpp` |

## Outcome

Across three native forms, the ordinary conditional forwarding forms do not retain the target call frame. The closest ordinary candidate is
20 bytes rather than the target 40 bytes, so the matching-only body was
removed and the target function was deferred.
