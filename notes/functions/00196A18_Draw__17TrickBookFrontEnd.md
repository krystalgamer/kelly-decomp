# Draw__17TrickBookFrontEnd

- Address: `0x00196A18`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.9706 | 55.8824 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released trick-book draw matched after expressing the three background virtual calls directly with the shared panel vtable layout.

## Outcome

The released trick-book background draw matched exactly on the third attempt.
