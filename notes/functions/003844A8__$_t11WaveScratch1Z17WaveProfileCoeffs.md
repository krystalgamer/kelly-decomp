# _$_t11WaveScratch1Z17WaveProfileCoeffs

- Address: `0x003844A8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 3 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 4 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 5 | different | 25.0 | 10.5263 | `candidate.cpp` |

## Outcome

Used immutable generic WaveScratch template and exact 512-byte WaveProfileCoeffs declaration. After correcting the missing type, explicit, automatic, direct-call, and forced-inline forms all emitted a 36-byte tail call to the base destructor rather than retail's inlined 76-byte teardown. Deferred after five attempts.
