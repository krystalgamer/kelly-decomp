# find_instance__C16slc_controller_tRC7stringx

- Address: `0x00318148`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.cpp`
- Reference source: `KS/SRC/script_lib_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.1346 | 10.5769 | `candidate.cpp` |

### Attempt 1 notes

# First pass wave73 A3 — find_instance__C16slc_controller_tRC7stringx

- No pre-existing attempt was present for `0x00318148`.
- Copied the exact released `slc_controller_t::find_instance` body and supplied
  minimal standalone declarations.
- Tested exactly once with
  `env/bin/python tools/function_test.py test 0x00318148 --candidate tmp/source_first/00318148/candidate.cpp`.
- Result: `different`; byte score 34.1346, instruction score 10.5769.
  Candidate and target were both 416 bytes.
- The attempt is preserved unchanged under
  `tmp/functions/00318148_find_instance__C16slc_controller_tRC7stringx/attempt-1/`.
- No retry, variant, diff chase, finalization, integration, tracked-file edit,
  build, commit, or push was performed.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_controller.cpp:42-50`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_controller.h:54-73`
- `kelly-slaters-pro-surfer/KS/SRC/signals.h:214-244`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:54-80,154-169,204-209,438-459`
- `tmp/functions/00318148_find_instance__C16slc_controller_tRC7stringx/attempt-1/result.json`

## Outcome

The exact released controller instance lookup differed at 34.1346% byte score; no source variant was attempted.
