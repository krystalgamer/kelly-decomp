# BioAvailable__14SurferFrontEnd

- Address: `0x00187FA0`
- Size: `0x194` (404 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.7822 | 72.2772 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 68 lane B5 — 0x00187FA0

- Confirmed there were no prior attempts.
- Copied the exact released `SurferFrontEnd::BioAvailable` body from `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.cpp:587-592`.
- Added minimal self-contained declarations for `stringx`, `file_finder_exists`, and the accessed `SurferFrontEnd` layout.
- Ran `function_test` exactly once. Result: `different`, byte score 71.7822%, instruction score 72.2772%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.cpp:587-592`
- `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.h:23-43,110-139`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:228-234,278-310,473-492`
- `tmp/functions/00187FA0_BioAvailable__14SurferFrontEnd/attempt-1/result.json`

## Outcome

The exact released surfer biography availability check differed at 71.7822% byte score; no source variant was attempted.
