# UserCamButton__FP9MenuEntryi

- Address: `0x00235EE0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The exact released callback matched immediately.  A shared ksdbmenu context
now reuses the established source-faithful `MenuEntry` and extends
`menu_shared.h` with the original `MenuSystem` virtual prefix and shipped
object layout, avoiding another raw callback-local vtable declaration.

## Outcome

Matched the released user-camera callback using shared debug-menu, menu-system, and game declarations.
