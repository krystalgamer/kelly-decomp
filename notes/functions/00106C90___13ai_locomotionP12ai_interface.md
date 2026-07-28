# __13ai_locomotionP12ai_interface

- Address: `0x00106C90`
- Size: `0x194` (404 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.8614 | 4.9505 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 68 lane B4 for `0x00106C90 __13ai_locomotionP12ai_interface`.
- Tested the exact released `ai_locomotion::ai_locomotion(ai_interface*)` body once with minimal self-contained declarations preserving the released member order and required `path`, `ai_path`, `vector3d`, enum, and virtual declarations.
- Result: **different** — byte score **13.8614%** (56/404), instruction score **4.9505%** (5/101), candidate size 280 versus target size 404.
- No variants, retries, diff chasing, build, finalization, tracked-file edit, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.cpp:29-76`
- `kelly-slaters-pro-surfer/KS/SRC/ai_locomotion.h:20-158`
- `tmp/functions/00106C90___13ai_locomotionP12ai_interface/attempt-1/result.json`

## Outcome

The exact released AI locomotion constructor differed at 13.8614% byte score; no source variant was attempted.
