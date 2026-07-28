# DrawMap__13BeachFrontEndf

- Address: `0x0018F378`
- Size: `0x178` (376 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.5909 | 7.2727 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the exact released `BeachFrontEnd::DrawMap(float)` body from `kelly-slaters-pro-surfer/KS/SRC/ks/BeachFrontEnd.cpp:673-716` with a self-contained minimal declaration scaffold based on `KS/SRC/ks/BeachFrontEnd.h:29-40` and `KS/SRC/ks/BeachFrontEnd.h:52-134`.

Canonical result: `different`, score `16.5909` (8/110 matching instructions; 73 matching bytes; candidate 440 bytes versus target 376 bytes). This FIRST PASS lane permits one candidate test only, so no retry or declaration variant was attempted.

## Outcome

Exact released-source first pass for beach map drawing did not match.
