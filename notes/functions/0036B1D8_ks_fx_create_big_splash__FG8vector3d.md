# ks_fx_create_big_splash__FG8vector3d

- Address: `0x0036B1D8`
- Size: `0x50` (80 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.5 | 0.0 | `candidate.cpp` |
| 2 | different | 10.0 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released splash body, vector3d copy declaration, FX_DEF_GENSPLASH value, and ks_fx_add_splash signature. Preserved the released call and reconstructed the target multiplayer suppression guard from the released game player-count fields; the matching-only barrier prevents a tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

Matched ks_fx_create_big_splash with released splash call and target multiplayer guard
