# deconstruct__16entity_anim_tree

- Address: `0x00117670`
- Size: `0x15C` (348 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.2222 | 12.2222 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 43 lane B1 for `0x00117670 deconstruct__16entity_anim_tree`.
- Tested the exact released `entity_anim_tree::deconstruct()` body once with minimal declarations preserving the released animation flag/vtable behavior, vector iteration, tree member offsets, world/ETT-manager calls, and track clearing.
- Result: **different** — 98/360 compared bytes (27.2222%) and 11/90 instructions (12.2222%); candidate size 360 versus target size 348.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked writes, tool edits, subagents, lean work, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/entity_anim.cpp:1988-2025`
- `kelly-slaters-pro-surfer/KS/SRC/entity_anim.h:165-175,205-221,311-345`
- `kelly-slaters-pro-surfer/KS/SRC/anim.h:165-200`
- `tmp/functions/00117670_deconstruct__16entity_anim_tree/attempt-1/result.json`

## Outcome

The exact released entity-animation-tree deconstruction differed from the target; the sole attempt scored 27.2222%.
