# Init__6FEMenu

- Address: `0x00156AE0`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.5586 | 20.7207 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave74 B5 — Init__6FEMenu

- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.cpp:469-509`.
- Minimal declarations derived from
  `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:52-138,160-227`.
- One candidate only; no variants or diff chase.
- Tested once with
  `env/bin/python tools/function_test.py test 0x00156AE0 --candidate tmp/source_first/00156AE0/candidate.cpp`.
- Result: `different`; byte score `33.5586`, instruction score `20.7207`.
- Preserved attempt:
  `tmp/functions/00156AE0_Init__6FEMenu/attempt-1/`.
- No finalization, integration, build, tracked-file edit, or commit.

## Outcome

The exact released FE menu initialization differed at 33.5586% byte score; no source variant was attempted.
