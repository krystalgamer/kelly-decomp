# _$_12MusicListing

- Address: `0x002588B8`
- Size: `0x84` (132 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.8108 | 32.4324 | `candidate.cpp` |
| 2 | different | 27.027 | 21.6216 | `candidate.cpp` |
| 3 | different | 31.0811 | 27.027 | `candidate.cpp` |
| 4 | different | 76.5152 | 36.3636 | `candidate.cpp` |
| 5 | different | 34.0278 | 11.1111 | `candidate.cpp` |

## Outcome

Deferred the released music-listing destructor after five source-level attempts; reverse destruction of all fifty tracks and conditional object deletion were reconstructed, but generated-destructor register scheduling did not match.
