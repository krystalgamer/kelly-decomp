# play__8MusicMan

- Address: `0x00258D60`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.8636 | 95.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released MusicMan::play body, paused/musicTrack offsets, MusicListing helpers, and invalid ID. Correcting the PS2 bool-sized layout matched byte-exactly on attempt 2.

## Outcome

Matched released MusicMan play
