# Update__16PhotoDevelopMenuf

- Address: `0x001D0408`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.7083 | 91.6667 | `candidate.cpp` |
| 2 | different | 92.7083 | 91.6667 | `candidate.cpp` |
| 3 | different | 95.8333 | 95.8333 | `candidate.cpp` |
| 4 | different | 92.1875 | 89.5833 | `candidate.cpp` |
| 5 | different | 95.8333 | 95.8333 | `candidate.cpp` |

### Attempt 3 notes

Register-binding the compressed-photo copy arguments matched 46 of 48
instructions; only the beach-global high-half load and selected-index load
were reversed.

### Attempt 5 notes

Local index ordering and an intervening compiler barrier could not swap only
those two instructions without disturbing the surrounding schedule.

## Outcome

The released photo development update matched 46 of 48 instructions, but five source forms could not swap only the beach-global and selected-index loads.
