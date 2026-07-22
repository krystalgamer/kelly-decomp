# MENUDRAW_SetAllEntities__Fb

- Address: `0x0030EDB0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.3636 | 4.5455 | `candidate.cpp` |
| 2 | different | 19.7368 | 5.2632 | `candidate.cpp` |
| 3 | different | 69.7368 | 36.8421 | `candidate.cpp` |
| 4 | different | 40.7895 | 26.3158 | `candidate.cpp` |
| 5 | different | 40.7895 | 26.3158 | `candidate.cpp` |

## Attempt notes

The exact immutable body was located in `menudraw.cpp` despite the scout
packet's missing-body report.  A shared menu-entity declaration preserves the
entry-count field and both retail globals.  The original indexed loop is
compiled with repeated global reloads; local menu/pointer and explicit
do-while variants recover the behavior but not the retail induction-variable
and delay-slot schedule.  The normalized barrier variant did not improve it.

## Outcome

Deferred after five source-only attempts; the complete released body is
recovered, but the available EE GCC chooses a different loop form.
