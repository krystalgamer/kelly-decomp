# WAVE_ResetSchedule__Fv

- Address: `0x00377900`
- Size: `0x20` (32 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.1111 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a helper-symbol, independent-store, or call-delay scheduling mismatch.

### Attempt 2 notes

The released reset clears the global schedule index and calls the synchronization helper, with the store filling the delay slot.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `WAVE_ResetSchedule` wrapper matched exactly.
