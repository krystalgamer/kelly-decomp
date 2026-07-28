# ReplaceBadCharacters__9NamesMenuR7stringx

- Address: `0x001A0310`
- Size: `0x15C` (348 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.7241 | 10.3448 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 43 lane B4 for `0x001A0310 ReplaceBadCharacters__9NamesMenuR7stringx`.
- Tested the exact released `NamesMenu::ReplaceBadCharacters(stringx&)` body once with minimal declarations preserving the released `stringx` object layout, `string_buf::char_length`, indexed read/write behavior, and `lock()` call.
- Result: **different** — 93/348 bytes (26.7241%) and 9/87 instructions (10.3448%); candidate size 296 versus target size 348.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.cpp:2044-2055`
- `kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.h:247-268`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-395`
- `tmp/functions/001A0310_ReplaceBadCharacters__9NamesMenuR7stringx/attempt-1/result.json`

## Outcome

The exact released bad-character replacement differed from the target; the sole attempt scored 26.7241%.
