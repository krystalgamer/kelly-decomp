# Init__10PanelQuad4fffffffffffff

- Address: `0x0014DED0`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.9048 | 4.7619 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 73 lane B3 — 0x0014DED0

- Confirmed there were no prior attempts.
- Tested the exact released `PanelQuad4::Init` body from `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:1876-1896` with minimal declarations.
- Ran `function_test` exactly once. Result: `different`, byte score 31.9048%, instruction score 4.7619%.
- Preserved all attempt artifacts. No variants, retries, diff chasing, build, finalization, tracked-file edits, or commit.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:1876-1896`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:430-548`
- `tmp/functions/0014DED0_Init__10PanelQuad4fffffffffffff/attempt-1/result.json`

## Outcome

The exact released panel-quad initialization differed at 31.9048% byte score; no source variant was attempted.
