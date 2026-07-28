# text_width__C12typeface_defRC7stringx

- Address: `0x0033CBC8`
- Size: `0x1BC` (444 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.8319 | 12.3894 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 80 lane A4 — attempt 1

Target: `0x0033CBC8 text_width__C12typeface_defRC7stringx` (444 bytes / `0x1BC`), object `game/files_vsim`.

Confirmed zero prior attempts before preparation. Tested exactly once using the exact released `typeface_def::text_width` body with minimal faithful declarations.

Result: **different**, byte score **37.8319%**, instruction score **12.3894%**; candidate **452 bytes**, target **444 bytes**. Candidate SHA-1: `7bdca708a988675bf95f25929dccf58e18f75501`.

No retries, variants, alternate logic, manual assembly, matching annotations, post-test diff chasing, finalization, integration, builds, tracked edits, or git mutation.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/text_font.cpp:1437-1466`
- `kelly-slaters-pro-surfer/KS/SRC/text_font.h` (`char_info`, `typeface_def`)
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:247-252,336-353,386-394`
- `tmp/functions/0033CBC8_text_width__C12typeface_defRC7stringx/target.s`
- `tmp/source-first-wave80/A4-0033CBC8/candidate.cpp`
- `tmp/functions/0033CBC8_text_width__C12typeface_defRC7stringx/attempt-1/result.json`

## Outcome

The exact released typeface text-width body differed at 37.8319% byte score; no source variant was attempted.
