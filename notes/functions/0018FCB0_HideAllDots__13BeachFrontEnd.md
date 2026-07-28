# HideAllDots__13BeachFrontEnd

- Address: `0x0018FCB0`
- Size: `0x19C` (412 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.0291 | 96.1165 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 71 lane B2 — 0x0018FCB0

- Confirmed there were no prior attempts.
- Copied the exact released `BeachFrontEnd::HideAllDots()` body from `kelly-slaters-pro-surfer/KS/SRC/ks/BeachFrontEnd.cpp:917-932`.
- Added only minimal self-contained declarations for `PanelQuad`, the six referenced arrays, and their measured layout.
- Ran `function_test` exactly once. Result: `different`, byte score 99.0291%, instruction score 96.1165%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/BeachFrontEnd.cpp:917-932`
- `kelly-slaters-pro-surfer/KS/SRC/ks/BeachFrontEnd.h:125-132,191`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:427-506`
- `tmp/functions/0018FCB0_HideAllDots__13BeachFrontEnd/attempt-1/result.json`

## Outcome

The exact released beach-dot hiding function differed at 99.0291% byte score; no source variant was attempted.
