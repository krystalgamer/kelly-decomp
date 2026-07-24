# nslReleaseAllSounds__Fv

- Address: `0x0038D3D0`
- Size: `0x84` (132 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 93.9394 | 93.9394 | `candidate.cpp` |
| 3 | different | 95.4545 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released all-sounds release loop matched after using nominal high relocation addresses and exact NSL call symbols.

## Outcome

The released NSL all-sounds release loop matched exactly on the fourth attempt.
