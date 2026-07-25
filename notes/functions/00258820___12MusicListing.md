# __12MusicListing

- Address: `0x00258820`
- Size: `0x98` (152 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.7949 | 2.7027 | `candidate.cpp` |
| 2 | different | 46.1538 | 2.7027 | `candidate.cpp` |
| 3 | different | 46.7949 | 2.7027 | `candidate.cpp` |
| 4 | different | 46.1538 | 2.7027 | `candidate.cpp` |
| 5 | different | 49.3421 | 55.8824 | `candidate.cpp` |

## Outcome

Five released-source music listing constructor variants reproduced track/order initialization and fields, but compiler hoisting and loop nop scheduling did not match.
