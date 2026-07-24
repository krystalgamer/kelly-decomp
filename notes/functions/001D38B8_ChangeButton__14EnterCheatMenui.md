# ChangeButton__14EnterCheatMenui

- Address: `0x001D38B8`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.3235 | 11.7647 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 79.4118 | 76.4706 | `candidate.cpp` |
| 4 | different | 79.4118 | 76.4706 | `candidate.cpp` |
| 5 | different | 80.8824 | 67.6471 | `candidate.cpp` |

## Outcome

Deferred the released cheat-button highlight change after five source-level attempts; both virtual TurnOn calls and current-button update were reconstructed, but prologue save scheduling remained different.
