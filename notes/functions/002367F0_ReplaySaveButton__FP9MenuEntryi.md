# ReplaySaveButton__FP9MenuEntryi

- Address: `0x002367F0`
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

The exact released callback matched immediately by reusing the preceding
shared ksdbmenu/MenuSystem/KSReplay context.  The replay declaration was
corrected to the released mutable `char *` filename signature.

## Outcome

Matched the released replay-save callback by reusing the shared debug-menu, menu-system, and replay contexts.
