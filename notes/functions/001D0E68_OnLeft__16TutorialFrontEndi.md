# OnLeft__16TutorialFrontEndi

- Address: `0x001D0E68`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TutorialFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TutorialFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual `OnLeft` forwarding use the
shared tutorial/menu hierarchy.

## Outcome

The manual menu/vtable layout was removed; the released forwarding remains
exact.
