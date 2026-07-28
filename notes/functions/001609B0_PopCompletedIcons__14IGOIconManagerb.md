# PopCompletedIcons__14IGOIconManagerb

- Address: `0x001609B0`
- Size: `0x170` (368 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.9898 | 1.0204 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 55 lane A2 for `0x001609B0 PopCompletedIcons__14IGOIconManagerb`.
- Tested the exact released `IGOIconManager::PopCompletedIcons` body once with minimal self-contained declarations for icon state/layout, scoring access, world/controller access, sound dispatch, and trick-chain replay.
- Result: **different**, byte score **11.9898%** (47/392) and instruction score **1.0204%** (1/98); candidate size 392 bytes versus target size 368 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/igoiconmanager.cpp:1124-1162`
- `kelly-slaters-pro-surfer/KS/SRC/ks/igoiconmanager.h:116-275`
- `kelly-slaters-pro-surfer/KS/SRC/ks/scoringmanager.h:284-294`
- `kelly-slaters-pro-surfer/KS/SRC/ks/SoundScript.h:48-76`
- `kelly-slaters-pro-surfer/KS/SRC/wds.h:188-190`
- `tmp/functions/001609B0_PopCompletedIcons__14IGOIconManagerb/attempt-1/result.json`

## Outcome

The exact released completed-icon pop operation differed from the target; the sole attempt scored 11.9898%.
