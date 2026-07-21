# WAVE_HintFromMarker__F14WaveMarkerEnumP16WavePositionHint

- Address: `0x0037D800`
- Size: `0x38` (56 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 2 | different | 58.9286 | 57.1429 | `candidate.cpp` |
| 3 | different | 46.4286 | 28.5714 | `candidate.cpp` |
| 4 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 5 | different | 17.8571 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

The released helper forwards a marker's x/z coordinates to WAVE_BuildHint. The recovered 32-byte marker stride and source-level call match; a trailing empty barrier preserves the ordinary call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents sibling-call conversion.

### Attempt 2 notes

Added a leading empty scheduling barrier before the released forwarding expression. It prevents the address low-half setup from moving ahead of the stack adjustment and yields the target schedule without emitting instructions.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction and preserves the demonstrated schedule.

### Attempt 3 notes

Represented the marker table through a pinned nearby base and negative displacement. This preserves the effective address using only an empty barrier, but changes more of the released setup schedule.

### Attempt 4 notes

Split the marker coordinates into source-level locals before the forwarding call. Optimization returns to the same near-match as the direct released expression, with only stack adjustment and low-half setup reversed.

### Attempt 5 notes

Expressed the indexed marker through a const reference before forwarding its coordinates. The optimized output remains the same two-instruction scheduling near-match, exhausting the source-only attempt limit.

## Outcome

The released marker lookup and WAVE_BuildHint forwarding are reconstructed, but the available compiler consistently reverses the stack adjustment and address low-half setup. Five source-only candidates were exhausted without instruction-emitting assembly.
