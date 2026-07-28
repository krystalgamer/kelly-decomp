# UpdateState__14ExtrasFrontEnd

- Address: `0x001BAA70`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.0476 | 15.2381 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 74 lane A1 — 0x001BAA70

- Confirmed there were no prior attempts.
- Copied the exact released `ExtrasFrontEnd::UpdateState` body from `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.cpp`.
- Added minimal self-contained declarations for the highlighted entry, submenu activation, panel visibility, member layout, and `UpdateHelpbar`.
- Ran `function_test` exactly once. Result: `different`, byte score 24.0476%, instruction score 15.2381%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, tool edits, subagents, lean work, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.cpp:569-589`
- `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.h:11-64`
- `tmp/functions/001BAA70_UpdateState__14ExtrasFrontEnd/attempt-1/result.json`
- `tmp/source_first/001BAA70/attempt-1.md`

## Outcome

The exact released extras front-end state update differed at 24.0476% byte score; no source variant was attempted.
