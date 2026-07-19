# ksnglSetViewport__FUiUiUiUi

- Address: `0x003818F8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active NGL version forwards the four viewport coordinates unchanged.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `ksnglSetViewport` wrapper matched exactly.
