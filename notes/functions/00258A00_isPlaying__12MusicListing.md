# isPlaying__12MusicListing

- Address: `0x00258A00`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released guard/indexing body and MusicListing/Track layout, including 72-byte Track stride and order offset. It matched on attempt 1.

## Outcome

Matched music listing playback query
