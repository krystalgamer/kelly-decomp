# GetStick__22kellyslater_controlleri

- Address: `0x0020D010`
- Size: `0x64` (100 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.0 | 44.0 | `candidate.cpp` |
| 2 | different | 52.0 | 44.0 | `candidate.cpp` |
| 3 | different | 52.0 | 44.0 | `candidate.cpp` |
| 4 | different | 52.0 | 44.0 | `candidate.cpp` |
| 5 | different | 58.0 | 48.0 | `candidate.cpp` |

## Outcome

Released stick-state clamp was reconstructed exactly except for two required floating-pipeline nop slots; five source-level candidates could not reproduce them without prohibited instruction assembly.
