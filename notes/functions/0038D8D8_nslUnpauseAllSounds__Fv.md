# nslUnpauseAllSounds__Fv

- Address: `0x0038D8D8`
- Size: `0x80` (128 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.2188 | 96.875 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released unpause-all loop matched after correcting the negative-low NSL global alias.

## Outcome

The released NSL unpause-all-sounds helper matched exactly on the second attempt.
