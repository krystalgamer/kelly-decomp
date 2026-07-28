# __cl__21slf_str_list_rbegin_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00334598`
- Size: `0x15C` (348 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 46 lane A3 for `0x00334598 __cl__21slf_str_list_rbegin_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_str_list_rbegin_t::operator()` body once with minimal self-contained declarations preserving the released VM stack layout, string-list iterator representation, `end()` followed by pre-decrement, overflow expression, and nested `entry_t` type.
- Result: **symbol_missing**, score **0.0%**. The candidate compiled successfully, but the isolated translation unit emitted no externally visible target function because the released in-class virtual definition was not instantiated.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:1314-1336`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:125-161`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:17-93`
- `tmp/functions/00334598___cl__21slf_str_list_rbegin_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released string-list reverse-begin operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
