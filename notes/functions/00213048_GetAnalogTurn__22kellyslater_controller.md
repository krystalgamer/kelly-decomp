# GetAnalogTurn__22kellyslater_controller

- Address: `0x00213048`
- Size: `0x88` (136 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2941 | 26.4706 | `candidate.cpp` |
| 2 | different | 32.3529 | 23.5294 | `candidate.cpp` |
| 3 | different | 35.2941 | 26.4706 | `candidate.cpp` |
| 4 | different | 30.9211 | 13.1579 | `candidate.cpp` |
| 5 | different | 29.4118 | 17.6471 | `candidate.cpp` |

## Outcome

Deferred the released analog-turn quantization after five source-level attempts; lean scaling, sign offset, integer truncation, and clamping were reconstructed, but the target retained two FPU hazard nops.
