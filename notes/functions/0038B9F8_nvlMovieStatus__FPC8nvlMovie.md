# nvlMovieStatus__FPC8nvlMovie

- Address: `0x0038B9F8`
- Size: `0x28` (40 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.5 | 40.0 | `candidate.cpp` |
| 2 | different | 87.5 | 70.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released flag tests are preserved. Binding the paused and error results to `$3` and `$2` reproduces the shipped `movn` selection without inline assembly.

## Outcome

Matched NVL movie status query.
