# was_start_pressed__C4game

- Address: `0x00283268`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 50.0 | released equality body |
| 2 | compile failed | 0.0 | 0.0 | scheduling barrier without annotation include |
| 3 | different | 58.3333 | 50.0 | local state plus normalized barrier |
| 4 | different | 58.3333 | 50.0 | explicit false/true branches |
| 5 | different | 58.3333 | 50.0 | local boolean result |

## Outcome

The released body and all successful equivalent forms emit the same 68-byte function. The target has one additional FPU hazard `nop` between loading `AXIS_MAX` with `mtc1` and comparing it. The allowed empty barrier did not preserve that slot, so the function was deferred rather than adding instruction-emitting assembly.
