# SetKsctrl__14ScoringManagerP22kellyslater_controller

- Address: `0x00246FD0`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released setter stores `ksctrl` at `0x8`, loads player number at controller offset `0x1674`, and stores the special-meter address `controller + 0x1648` at `0x10`. Exposing the minimal reference layout matched on attempt two.

## Outcome

The released `ScoringManager::SetKsctrl` pointer derivations matched on attempt two.
