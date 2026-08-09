# OnRight__13PhotoFrontEndi

- Address: `0x001CE128`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-menu null guard and virtual `OnRight` forwarding use the
shared photo/menu hierarchy.

## Outcome

The manual menu/vtable layout was removed; the released forwarding remains
exact.
