# InitIGO__9FEManager

- Address: `0x00198A20`
- Size: `0x19C` (412 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.6796 | 0.9709 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave71 B3 — InitIGO__9FEManager

- No pre-existing attempt was present for `0x00198A20`.
- Copied the exact released `FEManager::InitIGO` body and supplied only minimal declarations needed by the isolated candidate.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x00198A20 --candidate tmp/source_first/00198A20/candidate.cpp`.
- Result: `different`; byte score 10.6796% (44/412), instruction score 0.9709% (1/103), candidate size 340 bytes versus target size 412 bytes.
- No variants, diff chasing, finalization, integration, tracked-source edits, build, commit, or push were performed.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndManager.cpp:318-331` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndManager.h:13-120` — released manager declaration and member order.
- `tmp/functions/00198A20_InitIGO__9FEManager/attempt-1/result.json` — sole test result.

## Outcome

The exact released front-end IGO initialization differed at 10.6796% byte score; no source variant was attempted.
