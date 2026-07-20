# WAVETEX_CheckClearShadows__Fv

- Address: `0x0037F100`
- Size: `0x28` (40 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The direct conditional call became a sibling jump; a zero-instruction compiler barrier is required after the shadow clear.

### Attempt 2 notes

The released helper clears the one-shot shadow-buffer flag in the call delay slot before rebuilding shadows.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released shadow-clear check matched exactly.
