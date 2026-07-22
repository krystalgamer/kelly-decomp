# frame_advance__20dolly_and_strafe_mcsf

- Address: `0x002E3570`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mcs.cpp`
- Reference source: `KS/SRC/mcs.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.7368 | 89.4737 | `candidate.cpp` |
| 2 | different | 94.7368 | 89.4737 | `candidate.cpp` |
| 3 | different | 86.8421 | 84.2105 | `candidate.cpp` |
| 4 | different | 23.0769 | 3.8462 | `candidate.cpp` |
| 5 | different | 66.25 | 50.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `mcs.cpp:80-87` body and created a shared
released dolly-and-strafe motion-control layout.  The exact body reproduces
all calls, loads, resets, and epilogue; the available EE GCC exchanges only
the initial `ra` and `s0` save instructions.  Entry/trailing normalized
barriers, staged values, and a chained reset did not reproduce the target.

## Outcome

Deferred after five source-only attempts due the two-instruction callee-save
prologue schedule.
