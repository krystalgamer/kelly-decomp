# OnR1__17PlaylistMenuClassi

- Address: `0x001B0358`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released active-state wrapper and virtual down dispatch match with the same narrow scheduling barrier as OnL1.

## Outcome

The released active-state wrapper and virtual down dispatch match with a narrow compiler barrier preventing demonstrated prologue rescheduling.
