# OnCircle__13BeachFrontEndi

- Address: `0x001906E0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 31.25 | 10.7143 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released OnCircle body omits target guards on first_time and exitingWithoutSelect, and reproducing the binary would require inventing revision-specific behavior absent from the released source.
