# nglSetBufferSize__FUiUi

- Address: `0x00397578`
- Size: `0x1B0` (432 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.3333 | 28.9474 | `candidate.cpp` |

### Attempt 1 notes

# LEAN FIRST PASS wave77 B4 — 0x00397578

- Target: `nglSetBufferSize__FUiUi` (`0x00397578`, 432 bytes).
- Used the exact released `nglSetBufferSize` body with `NGL_ASYNC_LIST_SEND=1` expanded and only minimal required declarations.
- Ran `function_test` exactly once.
- Result: **different** — 33.3333% byte score, 28.9474% instruction score (33/114 instructions); candidate size 456 versus target size 432.
- No variants, retries, diff chasing, finalization, build, commit, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:1152-1211` — exact released function body.
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.h:250-260` — released buffer IDs and declaration.
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2_internal.h:67-70` — released async-list-send setting.
- `tmp/functions/00397578_nglSetBufferSize__FUiUi/attempt-1/result.json` — sole isolated test result.

## Outcome

The exact released NGL buffer-size setter differed at 33.3333% byte score; no source variant was attempted.
