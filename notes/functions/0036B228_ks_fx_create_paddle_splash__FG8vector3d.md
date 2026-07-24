# ks_fx_create_paddle_splash__FG8vector3d

- Address: `0x0036B228`
- Size: `0x88` (136 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.2647 | 97.0588 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released paddle splash creation matched after correcting the 224-byte loose-particle stride while preserving the mode guard and particle updates.

## Outcome

The released paddle splash creation matched exactly on the second attempt.
