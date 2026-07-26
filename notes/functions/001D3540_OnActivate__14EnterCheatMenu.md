# OnActivate__14EnterCheatMenu

- Address: `0x001D3540`
- Size: `0xD4` (212 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.25 | 6.6667 | `candidate.cpp` |
| 2 | different | 93.3962 | 92.4528 | `candidate.cpp` |
| 3 | different | 21.9298 | 14.0351 | `candidate.cpp` |
| 4 | different | 93.3962 | 92.4528 | `candidate.cpp` |
| 5 | different | 86.3208 | 83.0189 | `candidate.cpp` |

### Attempt 1 notes

The released body exposed missing shared string assignment and inaccurate PanelQuad/font declarations, producing extra string copies and the wrong panel vptr offset.

### Attempt 2 notes

Recovered the exact string assignment, TextString virtual order, PanelQuad vptr offset, font enum value, and empty-string address. Four scheduler placements still differed; best score was 93.3962%.

### Attempt 3 notes

Explicit raw storage for the temporary string forced an additional copy construction and a larger frame.

### Attempt 4 notes

A zero-instruction end constraint did not alter the four remaining prologue and temporary-argument scheduling differences.

### Attempt 5 notes

Argument-register clobber constraints disturbed otherwise matching scheduling and did not recover the target placement.

## Outcome

The exact released activation body, recovered string and widget declarations, correct vptr offsets, font enum, and empty-string binding reached 93.3962%. Five candidates could not reproduce four prologue and temporary-argument scheduler placements.
