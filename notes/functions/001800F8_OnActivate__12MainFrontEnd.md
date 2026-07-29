# OnActivate__12MainFrontEnd

- Address: `0x001800F8`
- Size: `0x200` (512 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.7344 | 10.1562 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave95 A3

- Target: `0x001800F8 OnActivate__12MainFrontEnd` (`0x200`, 512 bytes).
- Exact source: `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.cpp:372-423`.
- Confirmed `attempts0` before preparation/testing (`attempts.json` was `[]`).
- Prepared one LF-only candidate containing the exact released function body and minimal standalone declarations.
- Sole test invocation: `env/bin/python tools/function_test.py test 0x001800F8 --candidate tmp/source-first-wave95/A3-001800F8/candidate.cpp`.
- Result: `different`; byte score `27.7344%` (`142/512`), instruction score `10.1562%` (`13/128`).
- Candidate size: 488 bytes; target size: 512 bytes.
- Emitted symbol: `OnActivate__12MainFrontEnd`.
- Candidate SHA-1: `6d7571277fbac798af19a3f556a539b173291bd7`.
- Exactly one candidate and one test. No retry, chase, build, finalize, integration, git operation, or tracked edit.

## Outcome

The exact released main-frontend activation body differed at 27.7344% byte score; no source variant was attempted.
