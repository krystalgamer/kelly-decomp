# GetWipeoutIntensity__22kellyslater_controller

- Address: `0x002217A0`
- Size: `0x190` (400 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.25 | 12.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 68 A3

Target: `0x002217A0 GetWipeoutIntensity__22kellyslater_controller`

Exactly one candidate was tested: the exact released `kellyslater_controller::GetWipeoutIntensity` body with minimal declarations.

Result: **different**, byte score **26.25%** (105/400), instruction score **12.0%** (12/100); candidate size 372 bytes versus target size 400 bytes.

No retry, variants, disassembly comparison, diff chasing, build, finalize, integration, tracked-file edits, commit, or push.

Citations: released `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.cpp:7679-7721`; candidate `tmp/source_first/002217A0/candidate.cpp`; result `tmp/functions/002217A0_GetWipeoutIntensity__22kellyslater_controller/attempt-1/result.json`.

## Outcome

The exact released wipeout-intensity calculation differed at 26.2500% byte score; no source variant was attempted.
