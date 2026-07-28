# __cl__30slf_entity_list_iterator_inc_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003333A8`
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

- FIRST PASS wave 46 lane A1 for `0x003333A8 __cl__30slf_entity_list_iterator_inc_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_entity_list_iterator_inc_t::operator()` body once with minimal self-contained declarations for the script-library function base, `vm_stack`, entity-list iterator, thread/executable/instance accessors, `stringx` concatenation, and `error`.
- Result: **symbol_missing**, score **0.0%**. The candidate compiled successfully, but the isolated translation unit emitted no externally visible function because the released in-class virtual definition was not instantiated.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:1057-1076`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:87-121`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-83`
- `tmp/functions/003333A8___cl__30slf_entity_list_iterator_inc_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released entity-list iterator increment emitted no target symbol in the isolated bench; the sole attempt scored 0%.
