# set_active_player__4gamei

- Address: `0x00284D18`
- Size: `0x178` (376 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.9894 | 12.766 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Result: `different`; byte score: `28.9894` (109/376), instruction score: `12.766` (12/94). Candidate used the exact released `game::set_active_player` body with minimal self-contained declarations/layout derived from the released headers.

Citations: pinned reference `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`, `KS/SRC/game.cpp:5341-5360`; `KS/SRC/game.h:411-465`; `KS/SRC/wds.h:320-328`; `KS/SRC/controller.h:20-42`; `KS/SRC/ks/kellyslater_controller.h:691-692,815`; `KS/SRC/entity.h:839,866`; canonical `attempts.json` and `attempt-1/result.json`.

No retry: FIRST PASS lane permits exactly one candidate test.

## Outcome

Exact released-source first pass for active player selection did not match.
