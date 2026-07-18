# ks_fx_GetDrawCrash__Fv

- Address: `0x0036D2A8`
- Size: `0x10` (16 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor tests the crash-FX global through a local absolute equate.

## Outcome

The released `ks_fx_GetDrawCrash` global predicate matched exactly on the first attempt.
