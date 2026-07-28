# OnTriangle__14SurferFrontEndi

- Address: `0x001894E8`
- Size: `0x194` (404 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.5446 | 6.9307 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave69 A1 — 0x001894E8

- Confirmed there were no prior attempts.
- Copied the exact released `SurferFrontEnd::OnTriangle` body from `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.cpp:980-1007`.
- Added minimal self-contained declarations preserving accessed member offsets and call shapes.
- Ran `function_test` exactly once. Result: `different`, byte score 20.5446%, instruction score 6.9307%.
- No variants, retries, diff chasing, build, finalization, integration, commit, tracked-file edits, or subagents were performed.
- Because the attempt did not match, no source proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.cpp:980-1007`
- `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.h:18-90`
- `tmp/functions/001894E8_OnTriangle__14SurferFrontEndi/attempt-1/result.json`

## Outcome

The exact released surfer triangle handler differed at 20.5446% byte score; no source variant was attempted.
