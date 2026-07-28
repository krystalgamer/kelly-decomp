# OnLeft__13BoardFrontEndi

- Address: `0x001B70A0`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.729 | 34.5794 | `candidate.cpp` |

### Attempt 1 notes

# OnLeft__13BoardFrontEndi

- Address: `0x001B70A0`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.7290 | 34.5794 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `OnLeft__13BoardFrontEndi` body with minimal declarations. It emitted 424 bytes against the 428-byte target. The target contains an `nslFrameAdvance(0.01f)` call immediately after the released sound event, so the exact released body did not match. No retry or variant was made. Citations: `kelly-slaters-pro-surfer/KS/SRC/ks/BoardFrontEnd.cpp:384-445`, `kelly-slaters-pro-surfer/KS/SRC/ks/BoardFrontEnd.h:16-89`, `kelly-slaters-pro-surfer/KS/SRC/game.h:573-574`, `kelly-slaters-pro-surfer/KS/SRC/ks/boarddata.h:24-27`, `tmp/source_first/001B70A0/result.json`.

## Outcome

Exact released-source first pass for board front end left input did not match.

## Outcome

The exact released board-front-end left handler differed at 46.7290% byte score; no source variant was attempted.
