# __cl__20slf_str_list_begin_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00334208`
- Size: `0x158` (344 bytes)
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

- FIRST PASS wave 43 lane A3 for `0x00334208`.
- Tested the released `slf_str_list_begin_t::operator()` class/body once with minimal declarations for the string-list iterator, VM stack, script thread error path, and script-library base interfaces.
- Result: **compile_failed**, score **0.0%**. The isolated declarations omitted the `stringx + stringx` overload required by the released overflow expression.
- Exactly one non-placeholder candidate was tested. No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:1268-1288`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:127-161`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,264-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-87`
- `tmp/functions/00334208___cl__20slf_str_list_begin_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/compiler.stderr`
- `tmp/functions/00334208___cl__20slf_str_list_begin_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released string-list begin operator failed the isolated compile; the sole attempt scored 0%.
