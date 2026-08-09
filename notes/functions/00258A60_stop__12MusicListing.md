# stop__12MusicListing

- Address: `0x00258A60`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.7143 | 7.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released function uses the shared 72-byte `Track` records and stops the
track selected by `order[current]`. A local stop-function pointer preserves
the non-tail call.

## Outcome

The local music layouts and compiler barrier were removed.
