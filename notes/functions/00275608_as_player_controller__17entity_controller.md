# as_player_controller__17entity_controller

- Address: `0x00275608`
- Size: `0xD0` (208 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/controller.cpp`
- Reference source: `KS/SRC/controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 8.1731 | 0.0 | `candidate.cpp` |
| 3 | different | 8.1731 | 0.0 | `candidate.cpp` |
| 4 | different | 8.1731 | 0.0 | `candidate.cpp` |
| 5 | different | 8.1731 | 0.0 | `candidate.cpp` |

## Outcome

The released error construction was recovered, but temporary string concatenation and destruction scheduling remained irreducible after five source-level attempts.
