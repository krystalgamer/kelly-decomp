# _$_t11WaveScratch1Zt12SplineData2D1i16

- Address: `0x00384088`
- Size: `0x4C` (76 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 2 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 3 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 4 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 5 | different | 25.0 | 10.5263 | `candidate.cpp` |

## Outcome

Used immutable generic WaveScratch template and exact SplineData2D<16> declaration. Explicit, automatic, forced-inline, and out-of-class base-destructor forms all emitted a 36-byte derived teardown that tail-called the base destructor instead of retail's 76-byte inlined teardown. Deferred after five attempts.
