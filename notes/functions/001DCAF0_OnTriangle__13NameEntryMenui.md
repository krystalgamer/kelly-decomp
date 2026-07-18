# OnTriangle__13NameEntryMenui

- Address: `0x001DCAF0`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/HighScoreFrontEnd.h`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target and released configuration reduce this front-end hook to an empty method. The guarded candidate matched on the first attempt.

## Outcome

The target and released configuration reduce NameEntryMenu::OnTriangle(int) to an empty hook. The first candidate matched exactly and preserved the byte-identical integrated ROM.
