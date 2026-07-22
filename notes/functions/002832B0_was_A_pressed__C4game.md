# was_A_pressed__C4game

- Address: `0x002832B0`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 50.0 | released equality body |
| 2 | different | 58.3333 | 50.0 | local control-state value |
| 3 | different | 58.3333 | 50.0 | local value plus normalized barrier |
| 4 | different | 63.8889 | 55.5556 | explicit true/false branches |
| 5 | different | 58.3333 | 50.0 | reversed equality operands |

## Outcome

The source-faithful body emits the correct call, constant, comparison, and return logic but is 68 bytes. The target retains an extra FPU hazard `nop` after `mtc1`; no allowed source form reproduced it, so the function was deferred without instruction-emitting assembly.
