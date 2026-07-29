# get_token__10ini_parserPPcPiT2

- Address: `0x0030D0B0`
- Size: `0x1F0` (496 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/ini_parser.cpp`
- Reference source: `KS/SRC/ini_parser.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.871 | 20.1613 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave92 B1
Target: 0x0030D0B0 get_token__10ini_parserPPcPiT2, 496/0x1F0, game/files_misfits.
Reference: kelly-slaters-pro-surfer/KS/SRC/ini_parser.cpp:244-298 (read-only).
Attempts before: 0. Exactly one LF candidate and one harness invocation.
Candidate: exact released function body with minimal faithful self-contained declarations and no project headers.
Result: different; byte score 33.8710% (168/496), instruction score 20.1613% (25/124), candidate size 484.
No alternatives, asm, annotations, variants, retry, attempts 2-5, post-test chasing, tracked edits, finalize, integration, build, or git mutation.
packet=false; tracked_files_changed=false; finalized=false; integrated=false.

## Outcome

The exact released INI token parser body differed at 33.8710% byte score; no source variant was attempted.
