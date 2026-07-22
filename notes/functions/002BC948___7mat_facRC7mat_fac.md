# __7mat_facRC7mat_fac

- Address: `0x002BC948`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.8421 | 84.2105 | `candidate.cpp` |
| 2 | different | 86.8421 | 84.2105 | `candidate.cpp` |
| 3 | different | 86.8421 | 84.2105 | `candidate.cpp` |
| 4 | different | 94.7368 | 89.4737 | `candidate.cpp` |
| 5 | different | 86.8421 | 84.2105 | `candidate.cpp` |

## Attempt notes

Used the immutable `matfac.cpp:49-56` copy-constructor body and created a
shared released nglMaterial/mat_fac declaration.  The member constructor,
retail vtable installation, and assignment call all match.  The exact and
alias forms differ only in three prologue instructions.  A normalized barrier
reduced that to the exchanged `ra` and `s1` stores, but did not match and was
not retained.

## Outcome

Deferred after five source-only attempts due the remaining constructor
callee-save prologue schedule.
