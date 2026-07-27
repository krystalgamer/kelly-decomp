# IsNewHighScore__17HighScoreFrontEndii

- Address: `0x001CABD0`
- Size: `0xF8` (248 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.129 | 56.4516 | `candidate.cpp` |

### Attempt 1 notes

Exact released `HighScoreFrontEnd::IsNewHighScore` body with the authentic game, high-score aggregate, 22-entry cheat enum, and cheat layout. The aggregate calls, cheat scan, and comparisons reproduce; EE GCC omitted the target's loop-scheduling nop and reordered several call setup instructions, producing 244 bytes instead of 248.

## Outcome

Exact released high-score test differed in aggregate-call and cheat-loop scheduling.
