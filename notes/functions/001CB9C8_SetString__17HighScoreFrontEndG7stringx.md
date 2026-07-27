# SetString__17HighScoreFrontEndG7stringx

- Address: `0x001CB9C8`
- Size: `0x108` (264 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.4848 | 7.5758 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released SetString body with self-contained declarations reconstructed from HighScoreFrontEnd.h and the referenced inline accessors. The isolated test result was different with byte score 23.4848 and instruction score 7.5758.

## Outcome

The exact released high-score string setter differed from the target; the sole attempt scored 23.4848%.
