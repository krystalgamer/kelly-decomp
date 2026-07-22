# addSource__12MusicListingPCcT1Ui

- Address: `0x002589B0`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.75 | 65.0 | `candidate.cpp` |
| 2 | different | 80.0 | 70.0 | `candidate.cpp` |
| 3 | different | 66.25 | 55.0 | `candidate.cpp` |

### Attempt 1 notes

Implemented MusicListing::addSource with Track stride 72, SetInfo argument forwarding, and totalSources increment. Initial layout placed tracks at offset 4 instead of immutable offset 8.

### Attempt 2 notes

Corrected the shared MusicListing layout with four bytes of padding, reproducing the target track offset and calls. Prologue save scheduling still differed from the immutable target.

### Attempt 3 notes

Tried a compiler barrier to influence prologue scheduling; the candidate remained different. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced MusicListing::addSource behavior, Track stride/layout, SetInfo forwarding, and source count increment, but could not match the target prologue scheduling. No fourth attempt was run.
