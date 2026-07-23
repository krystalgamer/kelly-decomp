# SetDisconnect__15PauseMenuSystemb

- Address: `0x001B4610`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.2917 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released disconnect flow and exact replay/bool/global layout. Correctly typing the stored field as bool removed normalization and matched on attempt 2.

## Outcome

Matched pause menu disconnect state update
