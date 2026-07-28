# __cl__19slf_str_list_rend_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00334768`
- Size: `0x15C` (348 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 46 lane A4 for `0x00334768 __cl__19slf_str_list_rend_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_str_list_rend_t::operator()` body once with minimal self-contained declarations for the script-library base, VM stack/thread accessors, string list/iterator, `stringx` concatenation, and `error`.
- Non-placeholder behavior: pop `parms_t`, obtain `me->begin()`, decrement the iterator, push the result, and return `true`.
- Result: **compile_failed**, score **0.0%**. The minimal declarations lacked the released iterator pre-decrement operator and the `stringx + stringx` overload required by `SLF_RETURN`.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:1338-1359`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:139-158`
- `tmp/functions/00334768___cl__19slf_str_list_rend_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`
- `tmp/functions/00334768___cl__19slf_str_list_rend_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/compiler.stderr`

## Outcome

The exact released string-list reverse-end operator failed the isolated compile; the sole attempt scored 0%.
