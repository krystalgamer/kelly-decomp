# Load__17HighScoreFrontEnd

- Address: `0x001CA588`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.1667 | 60.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released base load, embedded SetPQIndices call, in-game guard, NEM field, subobject offsets, and both virtual slots. Pinning the virtual receiver/function registers matched on attempt 2.

## Outcome

Matched high score frontend loading
