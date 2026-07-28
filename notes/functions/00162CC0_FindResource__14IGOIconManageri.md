# FindResource__14IGOIconManageri

- Address: `0x00162CC0`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.619 | 9.5238 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave73 B4 — FindResource__14IGOIconManageri

- No pre-existing attempt was present for `0x00162CC0`.
- Used the exact released `IGOIconManager::FindResource` body with minimal
  standalone declarations.
- Tested exactly once with
  `env/bin/python tools/function_test.py test 0x00162CC0 --candidate tmp/source_first/00162CC0/candidate.cpp`.
- Result: `different`; byte score `22.619%`, instruction score `9.5238%`.
- Candidate size: `408` bytes; target size: `420` bytes.
- The attempt is preserved under
  `tmp/functions/00162CC0_FindResource__14IGOIconManageri/attempt-1/`.
- No retry, variant, diff chase, finalization, integration, tracked-file edit,
  build, commit, or push was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/igoiconmanager.cpp:1680-1725`
- `kelly-slaters-pro-surfer/KS/SRC/ks/igoiconmanager.h:12-68,119-181`
- `tmp/functions/00162CC0_FindResource__14IGOIconManageri/attempt-1/result.json`

## Outcome

The exact released IGO icon resource lookup differed at 22.6190% byte score; no source variant was attempted.
