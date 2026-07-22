# WAVERENDER_SetWaveHighlightParams__FffffG9nglVectorfff

- Address: `0x001E7418`
- Size: `0x50` (80 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_waverender.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_waverender.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.7143 | 0.0 | `candidate.cpp` |
| 2 | different | 67.3077 | 61.5385 | `candidate.cpp` |
| 3 | different | 76.25 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

Initial candidate modeled nglVector as a by-value struct. Immutable source packet indicates an nglVector parameter, but this ABI model produced a 140-byte function with stack copies instead of the target lq/sq vector transfer.

### Attempt 2 notes

Changed nglVector to a const reference and reproduced all scalar global stores and ordering. The compiler emitted the expected no-prologue function but used ldl/ldr/sdl/sdr for the vector copy, yielding 104 bytes rather than the target lq/sq sequence.

### Attempt 3 notes

Tried a 16-byte vector-type nglVector while preserving the immutable scalar body. The compiler generated a shorter 72-byte function and still did not emit the target lq/sq instructions. Exactly three Luna attempts were exhausted; no attempt 4 was run.

## Outcome

Luna attempts 1-3 preserved the immutable scalar parameter stores but could not reproduce the target lq/sq nglVector transfer using supported source-level nglVector ABI models. No fourth attempt was run.
