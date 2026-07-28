# UpdateLastSeries__14ScoringManagerQ214ScoringManager9ATTRIBUTEi

- Address: `0x00248448`
- Size: `0x198` (408 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.1863 | 62.7451 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 70 lane B1 — 0x00248448

- Confirmed there were no prior attempts.
- Copied the exact active released `ScoringManager::UpdateLastSeries(ATTRIBUTE, int)` body from `kelly-slaters-pro-surfer/KS/SRC/ks/scoringmanager.cpp:627-684`.
- Added minimal self-contained declarations preserving released member offsets and call shapes.
- Ran `function_test` exactly once. Result: `different`, byte score 78.1863%, instruction score 62.7451%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/scoringmanager.cpp:627-684`
- `kelly-slaters-pro-surfer/KS/SRC/ks/scoringmanager.h:55-89,112-252`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndManager.h:11-18,126`
- `tmp/functions/00248448_UpdateLastSeries__14ScoringManagerQ214ScoringManager9ATTRIBUTEi/attempt-1/result.json`

## Outcome

The exact released last-series attribute update differed at 78.1863% byte score; no source variant was attempted.
