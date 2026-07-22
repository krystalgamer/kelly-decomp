# OnActivate__15CreditsFrontEnd

- Address: `0x001BB800`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.5 | 35.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Immutable reference source activates the FE graphical menu, resets scrolling flags and first-line position, disables the helpbar, and retains the TARGET_XBOX-only credits movie path. The PS2 candidate uses shared CreditsFrontEnd, FEManager, and GraphicalMenuSystem layouts.

## Outcome

matched CreditsFrontEnd OnActivate
