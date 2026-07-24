# nslUndampenAllSounds__Fv

- Address: `0x0038D958`
- Size: `0x74` (116 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 62.069 | `candidate.cpp` |
| 2 | different | 79.3103 | 72.4138 | `candidate.cpp` |
| 3 | different | 29.1667 | 16.6667 | `candidate.cpp` |
| 4 | different | 16.8478 | 4.3478 | `candidate.cpp` |
| 5 | different | 47.4138 | 24.1379 | `candidate.cpp` |

## Outcome

Deferred NSL sound undampening after five source-level attempts; the released initialization checks and 256-slot dampen reset loop reproduced except for a target-only integer branch hazard nop.
