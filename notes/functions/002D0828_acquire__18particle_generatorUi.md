# acquire__18particle_generatorUi

- Address: `0x002D0828`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `particle.cpp:781-788` body and created a shared
entity/particle-generator layout preserving the released flags, ring indices,
next-particle timer, and last-position-valid offsets.

## Outcome

Matched cache acquisition flags and particle-state reset byte-for-byte.
