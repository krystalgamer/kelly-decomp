# visual_rep_name_to_type__FRC7stringx

- Address: `0x002D7120`
- Size: `0x15C` (348 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/visrep.cpp`
- Reference source: `KS/SRC/visrep.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.9195 | 39.0805 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 44 A3 for `0x002D7120 visual_rep_name_to_type__FRC7stringx`.
- Tested the exact released `visual_rep_name_to_type(const stringx&)` body once with minimal declarations preserving the released `stringx` layout, constructors, lookup/lowercase operations, concatenation, error call, and `visrep_t` values.
- Result: **different** — 125/348 bytes (35.9195%) and 34/87 instructions (39.0805%); candidate size 292 versus target size 348.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/visrep.cpp:65-92`
- `kelly-slaters-pro-surfer/KS/SRC/visrep.h:18-26`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-275,408,425,431`
- `tmp/functions/002D7120_visual_rep_name_to_type__FRC7stringx/attempt-1/result.json`

## Outcome

The exact released visual-representation type resolver differed from the target; the sole attempt scored 35.9195%.
