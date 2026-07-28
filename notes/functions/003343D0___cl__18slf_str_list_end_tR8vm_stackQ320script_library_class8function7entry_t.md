# __cl__18slf_str_list_end_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003343D0`
- Size: `0x158` (344 bytes)
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

- FIRST PASS wave 43 lane A4 for `0x003343D0`.
- Tested the exact released `slf_str_list_end_t::operator()` class/body once, with minimal declarations for the released string-list iterator, VM stack, and script-library base interfaces.
- Result: **symbol_missing**, score **0.0%**. The compiler emitted no externally visible function because this inline virtual definition was not instantiated in isolation.
- No variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:1291-1311`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:123-158`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-87`
- `tmp/functions/003343D0___cl__18slf_str_list_end_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released string-list end operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
