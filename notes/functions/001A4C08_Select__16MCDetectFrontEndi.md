# Select__16MCDetectFrontEndi

- Address: `0x001A4C08`
- Size: `0x194` (404 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.3861 | 0.9901 | `candidate.cpp` |

### Attempt 1 notes

Exact released `MCDetectFrontEnd::Select(int)` body from `historicalsource/kelly-slaters-pro-surfer/KS/SRC/ks/MCDetectFrontEnd.cpp` was tested once with minimal declarations.

Result: different, score 11.3861%. The released body omits target sound-play/wait sequences in the insert-card and no-space paths; no variant or diff chase was attempted.

## Outcome

The exact released memory-card detect selection differed at 11.3861% byte score; no source variant was attempted.
