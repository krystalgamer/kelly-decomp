# ExitMenu__14EnterCheatMenuf

- Address: `0x001D39F0`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 20.0 | `candidate.cpp` |
| 2 | different | 68.75 | 75.0 | `candidate.cpp` |
| 3 | different | 8.5938 | 3.125 | `candidate.cpp` |

### Attempt 1 notes

Immutable body compiled with a const-reference checkCodeUnlock declaration; target requires a by-value stringx copy and a 48-byte frame, so this attempt scored 37.5%.

### Attempt 2 notes

Changed shared Cheat::checkCodeUnlock to take stringx by value, producing the target 48-byte frame and copy/check calls. The only mismatch was scheduling of the closing store versus the stringx constructor call.

### Attempt 3 notes

Tried an explicit local stringx copy to force the target scheduling, but it introduced a second copy/destructor and expanded the frame, scoring 8.59%. No further Luna attempt is permitted.

## Outcome

EnterCheatMenu::ExitMenu(float)
