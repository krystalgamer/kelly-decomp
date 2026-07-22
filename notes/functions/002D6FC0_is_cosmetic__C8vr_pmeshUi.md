# is_cosmetic__C8vr_pmeshUi

- Address: `0x002D6FC0`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 27.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Reused the shared original-style pmesh, face, and reduced-face declarations. As with the adjacent surface query, reversing the equivalent null test reproduced the target block order after the released spelling compiled with the branches swapped.
