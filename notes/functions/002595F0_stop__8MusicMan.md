# stop__8MusicMan

- Address: `0x002595F0`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released manager stops its embedded `MusicListing` only when that listing is playing. The recovered member offset matches directly; the empty matching barrier prevents the conditional stop call from becoming a sibling tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The music-manager stop helper matches with its released playing-state guard and delegated stop call.
