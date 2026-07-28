# _$_12ai_interface

- Address: `0x00104298`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 74 lane B2 — 0x00104298

- Confirmed there were no prior attempts before preparation.
- Copied the exact released `ai_interface::~ai_interface()` body from `kelly-slaters-pro-surfer/KS/SRC/ai_interface.cpp:187-255`.
- Added one self-contained minimal declaration candidate.
- Ran `function_test` exactly once. Result: `compile_failed`, score `0.0`; the allocator template declaration had the wrong first parameter kind.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ai_interface.cpp:187-255`
- `kelly-slaters-pro-surfer/KS/SRC/ai_interface.h:62-220`
- `tmp/functions/00104298__$_12ai_interface/attempt-1/result.json`
- `tmp/functions/00104298__$_12ai_interface/attempt-1/compiler.stderr`

## Outcome

The exact released AI-interface destructor failed to compile in the isolated bench; no source variant was attempted.
