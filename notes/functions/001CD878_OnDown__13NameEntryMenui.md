# OnDown__13NameEntryMenui

- Address: `0x001CD878`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 0.0 | `candidate.cpp` |
| 2 | different | 92.0 | 92.0 | `candidate.cpp` |
| 3 | different | 92.0 | 92.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact SoundScriptManager sequence, UPDOWN event, singleton global, and FEMultiMenu OnDown vtable slot. Fixed float/event registers matched on attempt 4.

## Outcome

Matched name entry down navigation
