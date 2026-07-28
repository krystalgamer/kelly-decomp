# WorldToPulse__t20WavePushPerturbClass1i6f

- Address: `0x00384C30`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

The exact released push-pulse world conversion was tested once and failed isolated compilation because the minimal shared declarations do not provide `assert`, `min`, `max`, or `SPLINE_Evaluate`; no source variant was attempted.

## Outcome

The exact released wave push conversion failed to compile in the isolated bench; no source variant was attempted.
