# _$_13error_context

- Address: `0x00312DA0`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/errorcontext.h`
- Reference source: `KS/SRC/errorcontext.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 73 lane A2 — 0x00312DA0

- Confirmed there were no prior attempts.
- Used the exact released `error_context` destructor from `kelly-slaters-pro-surfer/KS/SRC/errorcontext.h:30-33`, with only a destructor-emission function.
- Ran `function_test` exactly once. Result: `compile_failed`, score 0.0%.
- Wine GCC could not resolve the released header through the candidate's relative include.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/errorcontext.h:15-57`
- `tmp/functions/00312DA0__$_13error_context/attempt-1/compiler.stderr`
- `tmp/functions/00312DA0__$_13error_context/attempt-1/result.json`

## Outcome

The exact released error-context destructor failed to compile in the isolated bench; no source variant was attempted.
