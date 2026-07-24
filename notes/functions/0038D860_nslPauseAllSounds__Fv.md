# nslPauseAllSounds__Fv

- Address: `0x0038D860`
- Size: `0x78` (120 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.0312 | 40.625 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released NSL pause-all loop matched after restoring the exact global layout, sound-slot stride, and nominal high addresses for NSL state and fatal text.

## Outcome

The released pause-all-sounds routine matched exactly on the second attempt.
