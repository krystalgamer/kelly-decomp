# Draw__13PAL60FrontEnd

- Address: `0x001D55B8`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PAL60FrontEnd.cpp`
- Reference source: `KS/SRC/ks/PAL60FrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.0 | 92.0 | `candidate.cpp` |
| 2 | different | 76.0 | 76.0 | `candidate.cpp` |
| 3 | different | 96.0 | 92.0 | `candidate.cpp` |
| 4 | different | 27.7778 | 11.1111 | `candidate.cpp` |
| 5 | different | 94.0 | 84.0 | `candidate.cpp` |

## Outcome

Released PAL60 Draw calls were reconstructed through exact panel/text/base slots; best variants reached 23/25 instructions, but saved-register prologue scheduling resisted five candidates.
