# __cl__32slf_vector3d_list_iterator_dec_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00330580`
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

- FIRST PASS wave 45 lane A4 for `0x00330580`.
- Tested the exact released `slf_vector3d_list_iterator_dec_t::operator()` class/body once, with minimal declarations for the vector iterator, VM stack, string/error path, and script-library base interface.
- Result: **symbol_missing**, score **0.0%**. The compiler emitted no externally visible function because this inline virtual definition was not instantiated in isolation.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were attempted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:397-418`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:13,41`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-61,270-272,288-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-64,87`

## Outcome

The exact released vector-list iterator decrement emitted no target symbol in the isolated bench; the sole attempt scored 0%.
