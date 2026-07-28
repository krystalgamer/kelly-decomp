# Select__15CameraMenuClassi

- Address: `0x001AAFB0`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.6075 | 92.5234 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 76 lane A4 — 0x001AAFB0

- Confirmed the queue row was pending and the isolated scratch had no prior attempts.
- Copied the active released `CameraMenuClass::Select` body from `historicalsource/kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:1306-1336`.
- Added only minimal self-contained declarations preserving the released member offsets, singleton globals, and call shapes.
- Ran `function_test` exactly once. Result: `different`, byte score 80.6075%, instruction score 92.5234%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `historicalsource/kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:1306-1336`
- `historicalsource/kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.h:267-288`
- `tmp/functions/001AAFB0_Select__15CameraMenuClassi/attempt-1/result.json`

## Outcome

The exact released camera-menu selection differed at 80.6075% byte score; no source variant was attempted.
