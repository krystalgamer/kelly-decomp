# audioDecSendToIOP__FP8AudioDec

- Address: `0x003898E0`
- Size: `0x1B0` (432 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.2294 | 54.1284 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave77 B3 — audioDecSendToIOP__FP8AudioDec

- Target: `0x003898E0`, 432 bytes.
- Tested exactly one candidate: the exact released function body with minimal standalone declarations.
- Command: `env/bin/python tools/function_test.py test 0x003898E0 --candidate tmp/source_first/003898E0/candidate.cpp`.
- Result: **different**; byte score **75.2294%** (328/436 compared), instruction score **54.1284%** (59/109), candidate size 436 bytes versus target size 432 bytes.
- No retry, variant, diff chase, finalization, integration, build, commit, or tracked-file edit was performed.

## Citations

- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:1404-1442` — exact released function body.
- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:201-244` — released audio header and `AudioDec` layouts.
- `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:36-39,76-81` — released constants.
- `tmp/functions/003898E0_audioDecSendToIOP__FP8AudioDec/attempt-1/result.json` — sole isolated test result.

## Outcome

The exact released audio-to-IOP transfer differed at 75.2294% byte score; no source variant was attempted.
