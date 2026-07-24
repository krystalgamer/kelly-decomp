# OnClose__19MenuPerturbDurationb

- Address: `0x00372AC0`
- Size: `0x60` (96 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavemenu.cpp`
- Reference source: `KS/SRC/ks/wavemenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.5417 | 54.1667 | `candidate.cpp` |
| 2 | different | 89.5833 | 87.5 | `candidate.cpp` |
| 3 | different | 35.0 | 24.0 | `candidate.cpp` |
| 4 | different | 36.0 | 24.0 | `candidate.cpp` |
| 5 | different | 30.0 | 12.0 | `candidate.cpp` |

## Outcome

Released MenuPerturbDuration::OnClose call sequence matched 21/24 instructions, but prologue save/move scheduling resisted five source-level candidates.
