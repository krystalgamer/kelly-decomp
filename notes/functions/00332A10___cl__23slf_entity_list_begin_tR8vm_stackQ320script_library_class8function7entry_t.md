# __cl__23slf_entity_list_begin_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00332A10`
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

- FIRST PASS wave 42 lane B5 for `0x00332A10`.
- Tested the exact released `slf_entity_list_begin_t::operator()` class/body once, with minimal declarations for the released entity-list iterator, VM stack, and script-library base interfaces.
- Result: **symbol_missing**, score **0.0%**. The compiler emitted no externally visible function because this inline virtual definition was not instantiated in isolation.
- No variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:928-949`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:77-110`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,262-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-87`
- `tmp/functions/00332A10___cl__23slf_entity_list_begin_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released entity-list begin operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
