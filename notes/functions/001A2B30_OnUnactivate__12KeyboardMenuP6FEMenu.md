# OnUnactivate__12KeyboardMenuP6FEMenu

- Address: `0x001A2B30`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The unused menu parameter is preserved and the released body delegates to `TurnPQ(false)`; a barrier prevents a tail call.

## Outcome

The released `KeyboardMenu::OnUnactivate` wrapper matched exactly on the first attempt.
