# nvlMovieStatus__FPC8nvlMovie

- Address: `0x0038B9F8`
- Size: `0x28` (40 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.5 | 40.0 | `candidate.cpp` |
| 2 | different | 52.5 | 40.0 | `candidate.cpp` |
| 3 | different | 52.5 | 40.0 | `candidate.cpp` |
| 4 | different | 75.0 | 70.0 | `candidate.cpp` |
| 5 | different | 87.5 | 70.0 | `candidate.cpp` |

### Attempt 1 notes

The direct if/else chain inverted the first branch and selected the paused/invalid result with `movz` instead of the target `movn`.

### Attempt 2 notes

Introducing an explicit result variable did not change EE GCC\x27s inverted branch/movz lowering.

### Attempt 3 notes

Using the released enum return type preserved semantics but EE GCC still selected the inverted branch and movz lowering.

### Attempt 4 notes

Spelling the nonplaying path first fixed the branch and movn, but initializing the invalid result too early occupied the target paused-mask delay slot.

### Attempt 5 notes

Computing the paused mask in the target delay slot fixed the branch schedule, but EE GCC still initialized paused/invalid in the opposite registers and emitted `movz` instead of the target `movn`.

## Outcome

Five faithful source shapes reproduced the flag tests but not EE GCC's exact paused/invalid register selection; best byte score was 87.5%.
