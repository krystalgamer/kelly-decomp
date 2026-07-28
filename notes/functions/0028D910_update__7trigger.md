# update__7trigger

- Address: `0x0028D910`
- Size: `0x18C` (396 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.5 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave67 A2 — 0x0028D910

- Confirmed there were no prior attempts.
- Used the exact active released `trigger::update` body from `kelly-slaters-pro-surfer/KS/SRC/trigger.cpp:145-190`.
- Added one set of minimal faithful declarations based on `trigger.h`, `ai_interface.h`, `game.h`, and `wds.h`.
- Ran `function_test` exactly once. Result: `different`, byte score 22.5%, instruction score 0.0%.
- Preserved the candidate and canonical attempt note in scratch.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/trigger.cpp:145-190`
- `kelly-slaters-pro-surfer/KS/SRC/trigger.h:17-69`
- `kelly-slaters-pro-surfer/KS/SRC/ai_interface.h:232`
- `kelly-slaters-pro-surfer/KS/SRC/ai_interface.h:479`
- `kelly-slaters-pro-surfer/KS/SRC/game.h:251`
- `kelly-slaters-pro-surfer/KS/SRC/wds.h:320`
- `tmp/functions/0028D910_update__7trigger/attempt-1/result.json`
- `tmp/source_first/0028D910/attempt-1.md`

## Outcome

The exact released trigger update differed at 22.5000% byte score; no source variant was attempted.
