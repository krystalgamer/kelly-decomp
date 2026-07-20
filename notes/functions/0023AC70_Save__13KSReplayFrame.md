# Save__13KSReplayFrame

- Address: `0x0023AC70`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released save operation snapshots the three target timing globals into the frame. The timer `.equ` values use carried `0x0046...` aliases so their negative low halves still address the real `0x0045B284` and `0x0045B27C` globals while reproducing target `%hi`.

## Outcome

The released `KSReplayFrame::Save` implementation matched exactly.
