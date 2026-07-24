# Draw__13NameEntryMenu

- Address: `0x001CD130`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.9394 | 15.1515 | `candidate.cpp` |
| 2 | different | 84.8485 | 39.3939 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released name-entry menu draw matched after expressing each frontend text virtual draw directly with the established text vtable layout.

## Outcome

The released name-entry menu draw matched exactly on the fourth attempt.
