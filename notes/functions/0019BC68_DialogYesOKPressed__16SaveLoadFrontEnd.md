# DialogYesOKPressed__16SaveLoadFrontEnd

- Address: `0x0019BC68`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.5128 | 5.1282 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave73 B5 — 0x0019BC68

- Used the exact released `SaveLoadFrontEnd::DialogYesOKPressed` body for the
  PS2 configuration with minimal standalone declarations.
- Tested exactly once with
  `env/bin/python tools/function_test.py test 0x0019BC68 --candidate tmp/source_first/0019BC68/candidate.cpp`.
- Result: **different**.
- Byte score: **20.5128%** (96/468 compared bytes).
- Instruction score: **5.1282%** (6/117 instructions).
- Candidate size: **468 bytes**; target size: **420 bytes**.
- The attempt is preserved under
  `tmp/functions/0019BC68_DialogYesOKPressed__16SaveLoadFrontEnd/attempt-1/`.
- No variants, diff chase, finalization, integration, tracked-file edits,
  build, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.cpp:862-924`
- `kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.h:56-188`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:434-472`
- `tmp/functions/0019BC68_DialogYesOKPressed__16SaveLoadFrontEnd/attempt-1/result.json`

## Outcome

The exact released save-load dialog confirmation differed at 20.5128% byte score; no source variant was attempted.
