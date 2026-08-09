# OnTriangle__12MainFrontEndi

- Address: `0x0017FE50`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.9412 | 17.6471 | `candidate.cpp` |
| 2 | different | 95.5882 | 88.2353 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body with an abbreviated FEMenu virtual layout; OnTriangle was one slot late and the base path was tail-called.

### Attempt 2 notes

Restored the released virtual slot and added one common barrier; calls matched but epilogue scheduling differed.

### Attempt 3 notes

Kept the released branch body and used narrow barriers in each branch to prevent both demonstrated tail calls; this matched exactly.

## Outcome

The matching-only branch barriers and abbreviated virtual layout were removed.
The shared released body tail-calls both branch targets, so this wrapper was
deferred rather than retaining compiler-control scaffolding.
