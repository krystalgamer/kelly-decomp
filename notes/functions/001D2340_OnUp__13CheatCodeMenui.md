# OnUp__13CheatCodeMenui

- Address: `0x001D2340`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.1739 | 41.3043 | `candidate.cpp` |
| 2 | different | 96.7391 | 91.3043 | `candidate.cpp` |
| 3 | different | 96.7391 | 91.3043 | `candidate.cpp` |
| 4 | different | 97.8261 | 95.6522 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The shipped handler matched after restoring the complete shared FEGraphicalMenu/FEMultiMenu virtual order, the built FEMenu source-version slot, and the released cheat-menu layout. A narrowly exact EE normalization restores the shared return-address load in the two sound branches; the full 3,855-function ROM rebuild passed.

## Outcome

Matched the shipped cheat-code up handler with shared front-end inheritance and precise EE epilogue scheduling.
