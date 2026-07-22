# __24MenuEntryStringxListEditPcPiiP7stringx

- Address: `0x00240128`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 2 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 3 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 4 | different | 68.4211 | 68.4211 | `candidate.cpp` |
| 5 | different | 89.4737 | 89.4737 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `menu.cpp:815-825` body and extended the shared
released hierarchy with `MenuEntryStringxListEdit`.  The exact constructor,
member-initializer, local-alias, and explicit-member forms reproduce all but
the same two independent prologue instructions seen in the adjacent list
constructor.  The normalized barrier form scheduled additional instructions
away from the target and was not retained.

## Outcome

Deferred after five source-only attempts because EE GCC reverses the target's
saved-register store and saved-label move in the constructor prologue.
