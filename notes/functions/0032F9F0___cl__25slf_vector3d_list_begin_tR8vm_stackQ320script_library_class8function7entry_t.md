# __cl__25slf_vector3d_list_begin_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032F9F0`
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

- FIRST PASS wave 42 A5 for `0x0032F9F0`.
- Tested the exact released `slf_vector3d_list_begin_t::operator()` body once with minimal declarations preserving the released VM stack layout, vector/list iterator representation, string overflow expression, and nested `entry_t` type.
- Result: **symbol_missing**, score **0.0%**. The isolated compiler emitted no externally visible target function because the inline virtual definition was not instantiated.
- Exactly one non-placeholder candidate was tested. No variants, diff chasing, build, finalization, integration, tracked/tool edits, subagents, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.cpp:246-267`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_list.h:13-23,33-44`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:270-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:17-93`
- `attempt-1/result.json`

## Outcome

The exact released vector-list begin operator emitted no target symbol in the isolated bench; the sole attempt scored 0%.
