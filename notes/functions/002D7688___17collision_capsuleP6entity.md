# __17collision_capsuleP6entity

- Address: `0x002D7688`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `capsule.cpp:18-23` body and created a shared
released collision-geometry/capsule declaration.  The base layout preserves
the inherited owner and vtable offsets before the relative capsule.

## Outcome

Matched base construction, owner assignment, and dimension computation
byte-for-byte.
