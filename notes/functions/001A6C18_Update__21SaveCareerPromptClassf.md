# Update__21SaveCareerPromptClassf

- Address: `0x001A6C18`
- Size: `0x164` (356 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.065 | 21.9512 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 48 lane B4 for `0x001A6C18 Update__21SaveCareerPromptClassf`.
- Tested the exact released `SaveCareerPromptClass::Update(time_value_t)` body once with minimal declarations preserving the accessed `FEMenu`, `FEMenuSystem`, save prompt, game, beach/challenge, career/photo, and game-saver layouts and interfaces.
- Result: **different**, byte score **29.0650%** (143/492 compared bytes) and instruction score **21.9512%** (27/123); candidate size 492 bytes versus target size 356 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:410-440`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.h:154-194`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:161-233,434-470`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_gamesaver.h:68-120`
- `tmp/functions/001A6C18_Update__21SaveCareerPromptClassf/attempt-1/result.json`

## Outcome

The exact released career-save prompt update differed from the target; the sole attempt scored 29.065%.
