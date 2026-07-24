# __tf12linear_joint

- Address: `0x00300428`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/joint.h`
- Reference source: `KS/SRC/joint.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred linear_joint RTTI generation after five source-level attempts; the released joint inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
