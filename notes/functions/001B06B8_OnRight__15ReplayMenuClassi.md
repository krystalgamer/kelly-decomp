# OnRight__15ReplayMenuClassi

- Address: `0x001B06B8`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 69.697 | `candidate.cpp` |
| 2 | different | 93.3333 | 93.3333 | `candidate.cpp` |
| 3 | different | 93.3333 | 93.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the released replay-mode guard, frontend IGO/VCR slot, sound unpause/play/pause sequence, and global layouts. Pinning the event before the zero float argument matched on attempt 4.

## Outcome

Matched replay menu right handling
