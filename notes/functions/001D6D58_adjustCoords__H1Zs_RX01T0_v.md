# adjustCoords__H1Zs_RX01T0_v

- Address: `0x001D6D58`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/coords.h`
- Reference source: `KS/SRC/ks/coords.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.5217 | 17.3913 | `candidate.cpp` |
| 2 | different | 20.1087 | 6.5217 | `candidate.cpp` |
| 3 | different | 31.5217 | 17.3913 | `candidate.cpp` |
| 4 | different | 31.5217 | 17.3913 | `candidate.cpp` |
| 5 | different | 31.5217 | 17.3913 | `candidate.cpp` |

### Attempt 5 notes

Five source-faithful short-coordinate template variants reproduced the released arithmetic but remained 16 bytes short because the target contains four compiler-inserted `mtc1`-to-`cvt.s.w` hazard nops. As with the already deferred float and int instantiations, adding instruction-emitting asm would violate policy, so the shared experiment was removed.

## Outcome

Deferred the released short-coordinate template after five source-level attempts could not reproduce four target-only FPU hazard nops.
