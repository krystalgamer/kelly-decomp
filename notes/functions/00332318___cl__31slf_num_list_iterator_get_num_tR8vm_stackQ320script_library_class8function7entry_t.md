# __cl__31slf_num_list_iterator_get_num_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00332318`
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

- FIRST PASS wave 42 lane B4 for `0x00332318 __cl__31slf_num_list_iterator_get_num_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_num_list_iterator_get_num_t::operator()` body once with minimal self-contained declarations for the script-library function base, `vm_stack`, numeric-list iterator, thread/executable/instance accessors, `stringx` concatenation, and `error`.
- Result: **symbol_missing**. The candidate compiled successfully, but the isolated translation unit emitted no function symbols because the released in-class virtual definition was not instantiated; score 0.0000.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked writes, queue/tool edits, subagents, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:812-831`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,264-301`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:66-80`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-83`
- `tmp/functions/00332318___cl__31slf_num_list_iterator_get_num_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released number-list iterator getter emitted no target symbol in the isolated bench; the sole attempt scored 0%.
