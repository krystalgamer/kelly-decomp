# LoadScoringButton__FP9MenuEntryi

- Address: `0x0030F490`
- Size: `0x6C` (108 bytes)
- Object: `game/files_misfits`
- Debug source: `ks/menu_scoring.cpp`
- Reference source: `KS/SRC/ks/menu_scoring.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.8214 | 25.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read malloc/file lock state, unlock/load/relock sequence, and true result. Declaring the global lock as the released bool type matched on attempt 2.

## Outcome

Matched scoring data load button
