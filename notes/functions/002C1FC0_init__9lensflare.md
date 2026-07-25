# init__9lensflare

- Address: `0x002C1FC0`
- Size: `0xA8` (168 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/lensflare.cpp`
- Reference source: `KS/SRC/lensflare.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8571 | 4.7619 | `candidate.cpp` |
| 2 | different | 48.2143 | 40.4762 | `candidate.cpp` |
| 3 | different | 73.2143 | 54.7619 | `candidate.cpp` |
| 4 | different | 48.2143 | 40.4762 | `candidate.cpp` |
| 5 | different | 48.2143 | 40.4762 | `candidate.cpp` |

## Outcome

Five released lens-flare variants reproduced initialization but not two target-only FPU conversion hazard nops.
