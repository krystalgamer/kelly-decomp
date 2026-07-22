# __17MenuEntryListEditPcPiiPPc

- Address: `0x0023FFC0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.5263 | 89.4737 | `candidate.cpp` |
| 2 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 3 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 4 | different | 68.4211 | 68.4211 | `candidate.cpp` |
| 5 | different | 89.4737 | 89.4737 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `menu.cpp:772-782` constructor and expanded the
shared menu header through the released label, function, submenu, integer,
float, and list-edit hierarchy.  Resolving the retail vtable and base
constructor addresses reproduced every instruction except that EE GCC moves
the saved label argument before storing `s0`; the target performs those two
independent prologue instructions in the opposite order.  A normalized
barrier and a member-initializer form did not correct the schedule.

## Outcome

Deferred after five source-only attempts due the remaining two-instruction
constructor prologue scheduling mismatch.
