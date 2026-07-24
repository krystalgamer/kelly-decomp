# shutdown__12MusicListing

- Address: `0x00258C40`
- Size: `0x80` (128 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 0.0 | `candidate.cpp` |
| 2 | different | 71.0938 | 59.375 | `candidate.cpp` |
| 3 | different | 96.0938 | 87.5 | `candidate.cpp` |
| 4 | different | 95.3125 | 87.5 | `candidate.cpp` |
| 5 | different | 95.3125 | 87.5 | `candidate.cpp` |

## Outcome

Deferred the released music-listing shutdown after five source-level attempts; the closest candidate reached 96.09%, but blank-string address allocation and the loop count reload register differed.
