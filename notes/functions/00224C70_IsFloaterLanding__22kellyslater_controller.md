# IsFloaterLanding__22kellyslater_controller

- Address: `0x00224C70`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.1613 | 32.2581 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 45.1613 | 32.2581 | `candidate.cpp` |
| 4 | different | 27.9412 | 14.7059 | `candidate.cpp` |
| 5 | different | 25.7143 | 14.2857 | `candidate.cpp` |

## Outcome

Deferred kellyslater_controller::IsFloaterLanding after five source-level attempts; the released floater/grind control predicate, board flag, and lip collision call reproduced, but the target short-circuit result-register scheduling did not.
