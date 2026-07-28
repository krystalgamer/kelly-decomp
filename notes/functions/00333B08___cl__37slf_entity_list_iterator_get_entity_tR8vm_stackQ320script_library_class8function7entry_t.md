# __cl__37slf_entity_list_iterator_get_entity_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00333B08`
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

# Attempt 1 — exact released source

- FIRST PASS wave 43 lane A2 for `0x00333B08 __cl__37slf_entity_list_iterator_get_entity_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_entity_list_iterator_get_entity_t::operator()` body once with minimal self-contained declarations for the script-library function base, `vm_stack`, entity-list iterator, thread/executable/instance accessors, `stringx` concatenation, and `error`.
- Result: **symbol_missing**. The candidate compiled successfully, but the isolated translation unit emitted no function symbols because the released in-class virtual definition was not instantiated; score 0.0000.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked writes, queue/tool edits, subagents, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:1150-1171`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,264-301`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:83-123`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-83`
- `tmp/functions/00333B08___cl__37slf_entity_list_iterator_get_entity_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released entity-list iterator getter emitted no target symbol in the isolated bench; the sole attempt scored 0%.
