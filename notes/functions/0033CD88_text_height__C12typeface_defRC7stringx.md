# text_height__C12typeface_defRC7stringx

- Address: `0x0033CD88`
- Size: `0x170` (368 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.0543 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 56 lane B1 for `0x0033CD88 text_height__C12typeface_defRC7stringx`.
- Tested the exact released `typeface_def::text_height` body once with minimal self-contained declarations preserving the released `string_buf`, `stringx`, `char_info`, and `typeface_def` layouts and inline accessors used by the function.
- Result: **different**, byte score **10.0543%** (37/368) and instruction score **0.0%** (0/92); candidate size 260 bytes versus target size 368 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/text_font.cpp:1470-1501`
- `kelly-slaters-pro-surfer/KS/SRC/text_font.h:220-267`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:55-68,270-277,346-353,386-390`
- `tmp/functions/0033CD88_text_height__C12typeface_defRC7stringx/attempt-1/result.json`

## Outcome

The exact released typeface text-height definition differed from the target; the sole attempt scored 10.0543%.
