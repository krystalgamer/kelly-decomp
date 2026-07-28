# load__10scene_animRC7stringx

- Address: `0x0011CEA8`
- Size: `0x190` (400 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/scene_anim.cpp`
- Reference source: `KS/SRC/scene_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.75 | 4.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 67 lane B5 — 0x0011CEA8

- Confirmed there were no prior attempts.
- Copied the exact active released `scene_anim::load` body from `kelly-slaters-pro-surfer/KS/SRC/scene_anim.cpp:199-209`.
- Added minimal self-contained declarations for `stringx`, `filespec`, and `scene_anim` while preserving the released body exactly.
- Ran `function_test` exactly once. Result: `different`, byte score 16.7500%, instruction score 4.0000%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, tool edits, subagents, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/scene_anim.cpp:199-209`
- `kelly-slaters-pro-surfer/KS/SRC/filespec.h:9-22`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:276-291,462-465`
- `tmp/functions/0011CEA8_load__10scene_animRC7stringx/attempt-1/result.json`

## Outcome

The exact released scene-animation loader differed at 16.7500% byte score; no source variant was attempted.
