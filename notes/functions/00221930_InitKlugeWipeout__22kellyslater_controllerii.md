# InitKlugeWipeout__22kellyslater_controllerii

- Address: `0x00221930`
- Size: `0x198` (408 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.098 | 4.902 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 70 lane A5 — 0x00221930

- Tested the exact released `kellyslater_controller::InitKlugeWipeout(int, int)` body once with minimal self-contained declarations preserving the accessed controller, board-controller, scoring-manager, entity, pose, string, and vector layouts.
- Result: `different`; 82/408 compared bytes (20.0980%) and 5/102 instructions (4.9020%) matched. Candidate and target sizes were both 408 bytes.
- No variants, retries, diff chasing, build, finalization, integration, tracked writes, commit, or push were attempted.
- Because the attempt did not match, no source, candidate-prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.cpp:7715-7741`
- `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.h:531-610,841`
- `tmp/functions/00221930_InitKlugeWipeout__22kellyslater_controllerii/attempt-1/result.json`

## Outcome

The exact released kluge wipeout initialization differed at 20.0980% byte score; no source variant was attempted.
