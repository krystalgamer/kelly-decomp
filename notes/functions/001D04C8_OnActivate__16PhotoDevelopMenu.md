# OnActivate__16PhotoDevelopMenu

- Address: `0x001D04C8`
- Size: `0x80` (128 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.4062 | 3.125 | `candidate.cpp` |
| 2 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 3 | different | 78.9062 | 68.75 | `candidate.cpp` |
| 4 | different | 41.6667 | 15.1515 | `candidate.cpp` |
| 5 | different | 46.2121 | 12.1212 | `candidate.cpp` |

## Outcome

Deferred the released photo-development activation after five source-level attempts; the nested photo lookup and show call were reconstructed, but prologue and post-call scheduling remained different.
