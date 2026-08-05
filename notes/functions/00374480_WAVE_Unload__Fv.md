# WAVE_Unload__Fv

- Address: `0x00374480`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.2222 | 44.4444 | `size36-wave-cleanup-1.cpp` |
| 2 | different | 47.2222 | 44.4444 | `size36-wave-cleanup-2.cpp` |
| 3 | matched | 100.0 | 100.0 | `size36-wave-cleanup-3.cpp` |

### Attempt 1 notes

The exact call order tail-calls the final cleanup. Binding that final cleanup through an ordinary local function pointer preserves the released two-call frame without a barrier.

## Outcome

The released `WAVE_Unload` wrapper matched exactly.
