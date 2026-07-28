# calc_beach_spawn_pos__4game

- Address: `0x00285350`
- Size: `0x178` (376 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.4894 | 80.8511 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Result: `different` (score `91.4894`; instruction score `80.8511`; 344/376 matching bytes, 76/94 matching instructions). The candidate used the exact released function body with minimal declarations and layouts from pinned commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`.

Citations: `KS/SRC/game.cpp:5562-5595`, `KS/SRC/HWOSPS2/ps2_algebra.h:292-390`, `KS/SRC/ks/beachdata.h:52-149`, `KS/SRC/ks/wavedata.h:39-186`, `KS/SRC/game.h:137-256`.

No retry: FIRST PASS lane permits exactly one candidate test.

## Outcome

Exact released-source first pass for beach spawn calculation did not match.
