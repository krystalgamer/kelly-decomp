# play__12MusicListing

- Address: `0x00258A98`
- Size: `0x64` (100 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.6154 | 19.2308 | `candidate.cpp` |
| 2 | different | 75.9615 | 65.3846 | `candidate.cpp` |
| 3 | different | 77.8846 | 69.2308 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact MusicListing/Track/order layouts, empty-list return, track stride, Play call, sound ID, and success flag. Reordering the failure path and direct bool assignment matched on attempt 4.

## Outcome

Matched music listing play
