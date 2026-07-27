# _$_18particle_generator

- Address: `0x002CF0C0`
- Size: `0x108` (264 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released candidate cited at kelly-slaters-pro-surfer/KS/SRC/particle.cpp:88-95; kelly-slaters-pro-surfer/KS/SRC/particle.h:68-75,156-198. The sole test returned `compile_failed` with score 0.0000; no variant or later attempt was made.

## Outcome

The exact released particle-generator destructor failed the isolated compile because the released vector header was unavailable; the sole attempt scored 0%.
