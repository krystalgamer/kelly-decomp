# OnLeft__14ExtrasFrontEndi

- Address: `0x001BA7A8`
- Size: `0x160` (352 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.0455 | 6.8182 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 47 lane B4 for `0x001BA7A8 OnLeft__14ExtrasFrontEndi`.
- Tested the exact released `ExtrasFrontEnd::OnLeft` control flow once with minimal self-contained declarations matching the active menu, highlighted entry, submenu, arrow, and timer fields plus the required virtual calls and sound event.
- Result: **different**, byte score **17.0455%**, instruction score **6.8182%** (6/88 instructions).
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.cpp:541-565`
- `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.h:11-64`
- `tmp/functions/001BA7A8_OnLeft__14ExtrasFrontEndi/attempt-1/result.json`

## Outcome

The exact released ExtrasFrontEnd left handler differed from the target; the sole attempt scored 17.0455%.
