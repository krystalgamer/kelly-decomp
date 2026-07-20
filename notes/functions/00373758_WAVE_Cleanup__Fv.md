# WAVE_Cleanup__Fv

- Address: `0x00373758`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.2222 | 88.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used the effective mesh-id address without the `%hi` carry required by its negative low half.

### Attempt 2 notes

The released cleanup forwards the global wave mesh id to the texture mesh free helper.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `WAVE_Cleanup` wrapper matched exactly.
