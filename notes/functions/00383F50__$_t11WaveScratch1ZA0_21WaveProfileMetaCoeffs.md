# _$_t11WaveScratch1ZA0_21WaveProfileMetaCoeffs

- Address: `0x00383F50`
- Size: `0x4C` (76 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 4 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Used immutable WaveScratch template from wave.cpp:235-245 and exact 8192-byte WaveProfileMetaCoeffs[1] type. Explicit and natural instantiation emitted an out-of-line base-destructor tail call instead of retail's inlined base teardown; vtable-bound and barrier variants failed compilation. Deferred after five attempts.
