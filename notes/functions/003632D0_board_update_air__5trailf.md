# board_update_air__5trailf

- Address: `0x003632D0`
- Size: `0x164` (356 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.0449 | 95.5056 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 50 lane A3 for `0x003632D0 board_update_air__5trailf`.
- Tested the exact released `trail::board_update_air` body once with minimal self-contained declarations preserving the required `trail`, controller, board, entity, transform, spray-parameter, and vector layouts/inlines.
- Result: **different**, byte score **89.0449%** (317/356) and instruction score **95.5056%** (85/89); candidate and target sizes were both 356 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/trail.cpp:712-746`
- `kelly-slaters-pro-surfer/KS/SRC/ks/trail.h:51-72,74-120`
- `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.h:796,815`
- `kelly-slaters-pro-surfer/KS/SRC/ks/board.h:204`
- `tmp/functions/003632D0_board_update_air__5trailf/attempt-1/result.json`

## Outcome

The exact released trail air-update differed from the target; the sole attempt scored 89.0449%.
