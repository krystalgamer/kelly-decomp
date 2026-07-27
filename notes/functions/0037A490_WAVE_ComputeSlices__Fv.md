# WAVE_ComputeSlices__Fv

- Address: `0x0037A490`
- Size: `0x100` (256 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Released source copied verbatim with a compile-only declaration/address prefix. The sole test attempt failed to compile because the released static declaration of WAVE_WorldToProfile is treated as an undefined local function by the compiler; no second attempt was made.

## Outcome

The exact released wave-slice computation failed the isolated compile because its released static helper was unavailable; the sole attempt scored 0%.
